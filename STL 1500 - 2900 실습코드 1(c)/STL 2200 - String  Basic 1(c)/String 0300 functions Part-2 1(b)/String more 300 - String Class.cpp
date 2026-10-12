// Written by Zoh Q.

#include <bits/stdc++.h>
using namespace std;

class MyString {
  char *string_content;  // 문자열 데이터를 가리키는 포인터
  int string_length;     // 문자열 길이

  int memory_capacity;  // 현재 할당된 용량

 public:
  MyString();

  MyString(const char *str);   // 문자열로 부터 생성
  MyString(const MyString &str);   // 복사 생성자
  MyString(MyString &&str);   // 이동 생성자

  void reserve(int size);
  MyString operator+(const MyString &s);
  MyString &operator=(const MyString &s);
  ~MyString();

  int length() const;

  void println();
};

MyString::MyString() {
  cout << "생성자 호출 ! " << endl;
  string_length = 0;
  memory_capacity = 0;
  string_content = NULL;
}

MyString::MyString(const char *str) {
  cout << "생성자 호출 ! " << endl;
  string_length = strlen(str);
  memory_capacity = string_length;
  string_content = new char[string_length];

  for (int i = 0; i != string_length; i++) string_content[i] = str[i];
}
MyString::MyString(const MyString &str) {
  cout << "복사 생성자 호출 ! " << endl;
  string_length = str.string_length;
  string_content = new char[string_length];

  for (int i = 0; i != string_length; i++)
    string_content[i] = str.string_content[i];
}
MyString::MyString(MyString &&str) {
  cout << "이동 생성자 호출 !" << endl;
  string_length = str.string_length;
  string_content = str.string_content;
  memory_capacity = str.memory_capacity;

  // 임시 객체 소멸 시에 메모리를 해제하지 못하게 한다.
  str.string_content = nullptr;
  str.string_length = 0;
  str.memory_capacity = 0;
}
MyString::~MyString() {
  if (string_content) delete[] string_content;
}
void MyString::reserve(int size) {
  if (size > memory_capacity) {
    char *prev_string_content = string_content;

    string_content = new char[size];
    memory_capacity = size;

    for (int i = 0; i != string_length; i++)
      string_content[i] = prev_string_content[i];

    if (prev_string_content != NULL) delete[] prev_string_content;
  }
}
MyString MyString::operator+(const MyString &s) {
  MyString str;
  str.reserve(string_length + s.string_length);
  for (int i = 0; i < string_length; i++)
    str.string_content[i] = string_content[i];
  for (int i = 0; i < s.string_length; i++)
    str.string_content[string_length + i] = s.string_content[i];
  str.string_length = string_length + s.string_length;
  return str;
}
int MyString::length() const { return string_length; }
void MyString::println() {
  for (int i = 0; i != string_length; i++) cout << string_content[i];

  cout << endl;
}

int main() {
  MyString str1("abc");
  cout << "이동 전 -----" << endl;
  cout << "str1 : ";
  str1.println();

  cout << "이동 후 -----" << endl;
  MyString str2(move(str1));
  cout << "str1 : ";
  str1.println();
  cout << "str2 : ";
  str2.println();
}
