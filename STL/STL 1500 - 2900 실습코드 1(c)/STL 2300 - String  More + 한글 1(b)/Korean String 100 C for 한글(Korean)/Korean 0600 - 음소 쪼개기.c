#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <locale.h>
#include <wchar.h>
#include <string.h>
#include <stdbool.h>

#define NR_INITIAL  19
#define NR_MEDIAL   21
#define NR_FINAL    28

typedef struct korean_syllable_table {
    const char * const initial_table[NR_INITIAL];
    const char * const medial_table[NR_MEDIAL];
    const char * const final_table[NR_FINAL];
} KSTable;

static KSTable *init_korean_syllable_table(void) {
    const static wchar_t initial_wtable[NR_INITIAL] = {
        0x3131, 0x3132, 0x3134, 0x3137, 0x3138, 0x3139, 0x3141, 0x3142, 0x3143, 0x3145,
        0x3146, 0x3147, 0x3148, 0x3149, 0x314a, 0x314b, 0x314c, 0x314d, 0x314e
    };
    const static wchar_t medial_wtable[NR_MEDIAL] = {
        0x314f, 0x3150, 0x3151, 0x3152, 0x3153, 0x3154, 0x3155, 0x3156, 0x3157, 0x3158,
        0x3159, 0x315a, 0x315b, 0x315c, 0x315d, 0x315e, 0x315f, 0x3160, 0x3161, 0x3162,
        0x3163
    };
    const static wchar_t final_wtable[NR_FINAL] = {
        0x0000, 0x3131, 0x3132, 0x3133, 0x3134, 0x3135, 0x3136, 0x3137, 0x3139, 0x313a,
        0x313b, 0x313c, 0x313d, 0x313e, 0x313f, 0x3140, 0x3141, 0x3142, 0x3144, 0x3145,
        0x3146, 0x3147, 0x3148, 0x314a, 0x314b, 0x314c, 0x314d, 0x314e
    };

    const size_t required_memory_size =
        sizeof(KSTable) + (MB_CUR_MAX + 1) * (NR_INITIAL + NR_MEDIAL + NR_FINAL);
    void *raw_memory = NULL;
    char *table = NULL, *string_buffer = NULL;
    const char **table_entry = NULL;
    size_t i = 0;
    int mblen = 0;

    raw_memory = malloc(required_memory_size);
    if (!raw_memory)
        return NULL;

    table = (char *)raw_memory;
    string_buffer = table + sizeof(KSTable);

    table_entry = (const char **)(table + offsetof(KSTable, initial_table));
    for (i = 0; i<NR_INITIAL; i++, table_entry++) {
        mblen = wctomb(string_buffer, initial_wtable[i]);
        if (mblen < 0) {
            free(raw_memory);
            return NULL;
        }
        string_buffer[mblen] = '\0';
        *table_entry = string_buffer;
        string_buffer += (mblen + 1);
    }
    table_entry = (const char **)(table + offsetof(KSTable, medial_table));
    for (i = 0; i<NR_MEDIAL; i++, table_entry++) {
        mblen = wctomb(string_buffer, medial_wtable[i]);
        if (mblen < 0) {
            free(raw_memory);
            return NULL;
        }
        string_buffer[mblen] = '\0';
        *table_entry = string_buffer;
        string_buffer += (mblen + 1);
    }
    table_entry = (const char **)(table + offsetof(KSTable, final_table));
    for (i = 0; i<NR_FINAL; i++, table_entry++) {
        mblen = wctomb(string_buffer, final_wtable[i]);
        if (mblen < 0) {
            free(raw_memory);
            return NULL;
        }
        string_buffer[mblen] = '\0';
        *table_entry = string_buffer;
        string_buffer += (mblen + 1);
    }

    return (KSTable *)raw_memory;
}

static _Bool DecomposeKoreanSyllable(wchar_t code, wchar_t *initial, wchar_t *medial, wchar_t *final) {
    const wchar_t begin = 0xAC00;
    const wchar_t end = begin + NR_INITIAL * NR_MEDIAL * NR_FINAL;

    if (begin <= code && code < end) {
        code -= begin;
        if (final)*final = code % NR_FINAL;
        code /= NR_FINAL;
        if (medial)*medial = code % NR_MEDIAL;
        code /= NR_MEDIAL;
        if (initial)*initial = code;
        return true;
    }
    else return false;
}

int main(void) {
    char buf[80];
    KSTable *table = NULL;
    setlocale(LC_ALL, "");
    if (!(table = init_korean_syllable_table()))
        return EXIT_FAILURE;

    mbtowc(0, 0, 0);

    while ( printf("Korean for ja-mo:"), fgets(buf, sizeof(buf), stdin)) {
        size_t buf_offset = 0, buf_len = strlen(buf);
        wchar_t wc;
        int wc_len;
        while ((wc_len = mbtowc(&wc, buf + buf_offset, buf_len - buf_offset)) > 0) {
            wchar_t initial, medial, final;
            if (DecomposeKoreanSyllable(wc, &initial, &medial, &final)) {
                fputs(table->initial_table[initial], stdout);
                fputs(table->medial_table[medial], stdout);
                fputs(table->final_table[final], stdout);
            }
            buf_offset += wc_len;
        } putchar('\n');
    }
    putchar('\n');
    free(table);
    return EXIT_SUCCESS;
}
