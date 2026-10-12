#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* test.txt의 내용
엄마야 누나야 Where do
you wan to live 강변살자
뜰안엔 반짝이는
New올림피아호텔
금Gold모래 빛
*/

const int MAX_SIZE = 1000;
typedef enum {false, true} bool;

int main(){
        FILE *fp = fopen("test.txt","r");
        char* inp = (char*)malloc(sizeof(char)*MAX_SIZE);
        int i;
        bool HANGUL = false;

        while(fgets(inp, MAX_SIZE, fp)){
            printf("\n >> Line= %s" , inp);
            for(i = 0 ; i < strlen(inp) ; i++){
                if((inp[i] & 0x80) == 0x80) HANGUL = true; //한글인지 확인
                if(!HANGUL )printf(" %c" , inp[i]) ; //아니면 그냥 출력
                else{
                     printf(" (%c%c)" , inp[i] , inp[i+1]); //한글이면 2byte 출력
                     i++;
               }
             HANGUL = false;
            } // end of for( )
         printf("\n");
        } // end of while
} // end of main()

