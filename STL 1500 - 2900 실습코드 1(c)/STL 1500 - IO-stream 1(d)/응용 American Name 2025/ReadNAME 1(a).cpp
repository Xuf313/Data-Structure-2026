#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct Uname {
    char fname[50];
    char gender[10];
    int freq;
};
// "%[^,],%c,%d\n 는 comma가 나오기전까지 모두 읽어라.
int main() {
    int count = 0 ;
    FILE* file2020 = fopen("yob2020.txt", "r");
    FILE* file1950 = fopen("yob1950.txt", "r");


    Uname W;
    // fscanf로 콤마 구분 데이터 읽기
    while (fscanf(file2020, "%[^,],%c,%d\n\n", \
           W.fname, W.gender, &W.freq) == 3) {
       if( count % 100 == 0 )
       cout <<setw(13) << left <<  W.fname << ", " << W.gender << ", " << setw(5) << right << W.freq << endl;
       count++ ;
    }

    cout << "\n 총 갯수는 = " << count ;
    fclose( file2020 );


    return 0;
}
