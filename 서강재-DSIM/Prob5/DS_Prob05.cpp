#include <iostream>
#include <vector>
#include <utility>

using namespace std;
typedef pair<int,int> salesman ;

int main() {

    vector< salesman > M = {
        {123, 54}, {190,  6},{100, 78}, {210, 45} , {  92,  38  },\
        {154, 20}, {130, 30},{143, 18}, {120, 71} , { 198,  87  },\
        {123, 59}, {197, 23},{ 90, 88}, {111, 46} , {  29,  45  },\
        { 54, 37}, { 70, 34},{143, 18}, {120, 71} , {  95,  80  },\
        {153, 54}, {140, 62},{130, 48}, { 67, 15} , {  48,   5  },\
    };

    for(auto w : M ) {
        cout << "\n "<< w.first << " , " << w.second ;
    }

    return 0;
}
