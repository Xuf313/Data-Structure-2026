#include <bits/stdc++.h>
using namespace std;


int main(int argc, char** argv) {

    {   int i;
        string a = "한글입니다?What?";

        printf("1. %s \n", a.c_str());
        printf("2. %c%c === %c%c \n", a.at(0), a.at(1), a.at(2),a.at(3));
        printf("3. %c \n", a.at(1));
        printf("4. %c \n", a.at(11));
        printf("5. %s \n", a.substr(0,2).c_str());
        printf("6. %s \n", a.substr(2,4).c_str());
    }



    {
    int i;
    string a = "한a글b입c니다";

    printf("\n\n 실험 2 c_str() \n");
    printf("1. %s\n", a.c_str());
    printf("2. %c", a.at(2));
    printf("3. %c \n", a.at(1));
    printf("4. %s \n", a.substr(0,2).c_str());
    printf("5. %s \n", a.substr(0,2).c_str());
    printf("6. %s \n", a.substr(2,1).c_str());

    }

return 0;

}
