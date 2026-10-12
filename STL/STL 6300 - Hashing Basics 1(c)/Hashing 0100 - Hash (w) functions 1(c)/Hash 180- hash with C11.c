#include <stdio.h>

// 해시 함수 선언
long string_hash(char *mystring, int salt);

int main() {
    char *test_strings[] = {
        "Hello World",
        "hello world",
        "Hello World!",
        "test",
        "",
        NULL
    };

    int salts[] = {0, 123, 456, 999};

    printf("Testing string_hash function:\n\n");

    for (int i = 0; test_strings[i] != NULL; i++) {
        for (int j = 0; j < 4; j++) {
            long hash = string_hash(test_strings[i], salts[j]);
            printf("String: '%s', Salt: %d -> Hash: %ld\n",
                   test_strings[i], salts[j], hash);
        }
        printf("\n");
    }

    return 0;
}

// 해시 함수 구현
long string_hash(char *mystring, int salt) {
    unsigned long hash = (unsigned long)salt;

    if (mystring == NULL) {
        return (long)hash;
    }

    // DJB2 알고리즘 기반
    int c;
    while ((c = *mystring++)) {
        hash = ((hash << 5) + hash) + c;  // hash * 33 + c
    }

    return (long)hash;
}
