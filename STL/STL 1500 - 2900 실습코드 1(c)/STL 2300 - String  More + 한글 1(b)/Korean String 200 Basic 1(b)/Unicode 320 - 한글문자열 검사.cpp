#include <bits/stdc++.h>
#include <string>
using namespace std;

bool is_hangul(const char *text){
	bool hangul = true ;
	for(int i = 0 ; i < strlen(text); i++) {
		if( (text[i] & 0x80) != 0x80 ) {
		hangul = false ;}
	}
	return( hangul ) ;
}

int main( ){

	string mystr ;
	int i, j, k=0 ;
	char hanc[401] = {0,};
	mystr = "홍길+동이 드디어 10번이나 등장?";


	for(j = 0; j < mystr.length(); j++){
            if((mystr[j] & 0x80) == 0x80){
                hanc[k++] = mystr[j];
            }
    }

    cout << "hanc= " << hanc ;

	return 0;
}
