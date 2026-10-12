#include <iostream>
using namespace std;

int main(){
	char c ='Q';
	char *pc=&c;

	int a;
	int *pa=&a;

	cout<<sizeof(c)<<"\t"<<sizeof(pc)<<"\t address pc: "<<(void *)pc<<"\t address *pc: ";
	pc++;

	cout<<(void *)pc<<endl;
	cout<<sizeof(a)<<"\t"<<sizeof(pa)<<"\t address pa: "<<pa<<"\t address pa++: "<<pa++<<endl;
	return 0;
}

/*
operation result
1       4       006FFBF7        006FFBF8
4       4       006FFBDC        006FFBE0
*/
