#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    // 파일 읽기
    ifstream file("Pitcoin.txt");
    if (!file.is_open()) {
        cerr << "파일을 열 수 없습니다: P.txt" << endl;
        return 1;
    }

    // 파일 내용을 하나의 string으로 읽기
    string content;
    string line;
    while (getline(file, line)) {
        content += line + "\n";
    }
    file.close();

    // 문자열을 char 배열로 변환 (sscanf 사용을 위해)
    char* buffer = new char[content.size() + 1];
    strcpy(buffer, content.c_str());

    // 첫 번째 줄에서 N 읽기
    int N;
    char* ptr = buffer;
    sscanf(ptr, "%d", &N);

    // ptr을 첫 번째 줄 끝으로 이동
    while (*ptr != '\n' && *ptr != '\0') {
        ptr++;
    }
    if (*ptr == '\n') ptr++; // 개행 문자 건너뛰기

    // 동적 배열 할당
    int* a = new int[N];
    float* b = new float[N];

    // N개의 데이터 읽기
    for (int i = 0; i < N; i++) {
        int bytesRead;
        int result = sscanf(ptr, "%d %f%n", &a[i], &b[i], &bytesRead);

        if (result != 2) {
            cerr << "데이터 형식 오류: " << i + 1 << "번째 줄" << endl;
            break;
        }

        ptr += bytesRead; // 다음 위치로 이동

        // 개행 문자 건너뛰기
        while (*ptr == '\n' || *ptr == '\r') {
            ptr++;
        }
    }

    // 결과 출력 (확인용)
    cout << "N = " << N << endl;
    for (int i = 0; i < N; i++) {
       if(i%100000 == 0 )    cout << "a[" << i << "] = " << a[i] << ", b[" << i << "] = " << b[i] << endl;
    }


    return 0;
}
