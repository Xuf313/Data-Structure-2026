#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> sulsul;


int main() {
    sulsul PNU;
    deque < sulsul > ID_vol{ \
     {8823, 154}, {3190,  406},{  1100, 178}, {5210,   5} , { 6792,  248  },\
     {1954, 420}, {1430,   30},{  6143,  18}, {1020,  21} , { 1968,  187  },\
     {4100,  67}, {8197,  123}, { 7090,  88}, {1088, 246} , { 2009,  300  } };
    // 제일 앞에 선 학생은 8823이고 원하는 양은 154 이다.

    queue < sulsul > M(ID_vol);

    while (!M.empty()) {  // 이 부분을 제대로 채워야 합니다.


        PNU = M.front();
        if (PNU.second <= 20) {
            cout << "\n ID: " << PNU.first << ", 마실 술 :" << PNU.second;
            M.pop();
        }
        else if (20 < PNU.second && PNU.second <= 200) {
            int tmp_sul;
            int tmp_name = PNU.first;
            tmp_sul = PNU.second / 2;

            cout << "\n ID: " << PNU.first << ", 마실 술 :" << tmp_sul;
            tmp_sul = PNU.second - tmp_sul;

            M.pop();
            M.push({ tmp_name,tmp_sul });

        }
        else if (PNU.second > 201) {
            int tmp_sul;
            int tmp_name = PNU.first;
            tmp_sul = PNU.second / 3;

            cout << "\n ID: " << PNU.first << ", 마실 술 :" << tmp_sul;
            tmp_sul = PNU.second - tmp_sul;

            M.pop();
            M.push({ tmp_name,tmp_sul });

        }

    }


} // end of main ()



