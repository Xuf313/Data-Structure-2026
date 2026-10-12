#include <stdio.h>
#include <string.h>

int main(void){
	const char *str = "홍길+동";
	size_t i, len=strlen(str);
	for(i=0;i<len;i++){
		printf("\n %d : 0x%02x ", i,  str[i] & 0xff);
	}
	putchar('\n');
	return 0;
}
