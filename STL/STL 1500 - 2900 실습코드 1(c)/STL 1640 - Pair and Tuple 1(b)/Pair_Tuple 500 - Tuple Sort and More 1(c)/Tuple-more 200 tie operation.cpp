
#include <tuple>
#include <iostream>
#include <string>
using namespace std ;

int main() {
    cout << "- 참조 데이터를 저장하는 tuple 만들기" << endl;
    {
        int nUserIndex = 11;
        string UserName = "jacking";

        auto refUserItem = tie(nUserIndex, UserName);

        cout << get<0>(refUserItem) << endl;
        cout << get<1>(refUserItem) << endl;

        get<0>(refUserItem) = 12;
        get<1>(refUserItem) = "jacking75";

        cout << nUserIndex << endl;
        cout << UserName << endl;
    }

    cout << "- tuple에 저장된 데이터를 일괄적으로 변수에 담기" << endl;
    {
        tuple<int, string> UserInfo(1002, "jacking");

        int nUserIndex = 0;
        string UserName;

        tie(nUserIndex, UserName) = UserInfo;

        cout << nUserIndex << endl;
        cout << UserName << endl;
    }

    cout << "- 일부 요소를 무시하고 일괄적으로 변수에 담기" << endl;
    {
        tuple<int, string, int> UserInfo(1003, "jacking", 22);

        int nUserIndex = 0;
        int nLevel = 0;

        tie(nUserIndex, ignore, nLevel) = UserInfo;

        cout << nUserIndex << endl;
        cout << nLevel << endl;
    }

    return 0;
}



