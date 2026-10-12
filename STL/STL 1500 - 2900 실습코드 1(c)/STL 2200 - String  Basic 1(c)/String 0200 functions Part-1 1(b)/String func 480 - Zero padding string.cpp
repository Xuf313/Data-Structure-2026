#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
#include <boost/format.hpp>
#include <sstream>

int main() {
  std::string s("12");
  s.insert(0, 3, '0');
  std::cout << "Method.1 " << s << "\n";

  std::ostringstream ss;
  ss << std::setw(6) << std::setfill('0') << 12 << "\n";
  std::string s2(ss.str());
  std::cout << "Method.2 " << s2;

  boost::format fmt("%05d\n");
  fmt % 12;
  std::string s3 = fmt.str();
  std::cout << "Method.3 " << s3;
}
