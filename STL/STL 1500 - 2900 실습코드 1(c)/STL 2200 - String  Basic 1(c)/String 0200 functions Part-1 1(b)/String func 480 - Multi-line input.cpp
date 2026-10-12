#include <bits/stdc++.h>
using namespace std;

int main () {

  string content;
  string line;
  cout << " 문장을 입력하시오.(빈 라인은 return으로 끝): ";

  do {
    getline(cin,line);
    content += line + '\n';
  } while (!line.empty());

  cout << " 입력된 라인은 : " << content;
  return 0;
}
