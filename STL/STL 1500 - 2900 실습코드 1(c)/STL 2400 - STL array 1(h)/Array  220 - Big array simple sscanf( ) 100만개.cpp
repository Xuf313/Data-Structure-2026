#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    // 파일 전체를 string으로 읽기
    ifstream file("Pitcoin.txt");
    string content((istreambuf_iterator<char>(file)),
                   istreambuf_iterator<char>());
    file.close();

    // 문자열을 char 배열로 변환
    char* buffer = new char[content.size() + 1];
    strcpy(buffer, content.c_str());

    char* ptr = buffer;
    int N;

    // 첫 번째 숫자 N 읽기
    sscanf(ptr, "%d", &N);

    // ptr을 첫 번째 줄 끝으로 이동
    while (*ptr != '\n' && *ptr != '\0') ptr++;
    if (*ptr == '\n') ptr++;

    // 배열 동적 할당
    int* a = new int[N];
    float* b = new float[N];

    // 데이터 읽기
    for (int i = 0; i < N; i++) {
        int bytesRead;
        sscanf(ptr, "%d %f%n", &a[i], &b[i], &bytesRead);
        ptr += bytesRead;

        // 개행 문자 건너뛰기
        while (*ptr == '\n' || *ptr == '\r') ptr++;
    }

    // 결과 출력
    cout << "총 데이터 개수: " << N << endl;
    for (int i = 0; i < N; i++) {
       if(i%100000 == 0 )   printf("a[%d] = %d, b[%d] = %.2f\n", i, a[i], i, b[i]);
    }

    // 메모리 정리
    delete[] buffer;
    delete[] a;
    delete[] b;

    return 0;
}
