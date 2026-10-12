#include <boost/property_tree/ptree.hpp>
#include <iostream>

using boost::property_tree::ptree;

int main() {

  ptree pt;
  pt.put("A.B.C", "∞Ì∏±∂Û");
  pt.put("A.B.F", "µŒ¥ı¡„");
  pt.put("A.B.G", "¥Ÿ∂˜¡„");

  ptree &c = pt.get_child("A");
  ptree &windows = c.get_child("B");
  ptree &system = windows.get_child("C");
  std::cout << system.get_value<std::string>() << '\n';

  ptree &d = pt.get_child("A");
  ptree &windowd = d.get_child("B");
  ptree &systemd = windowd.get_child("F");
  std::cout << systemd.get_value<std::string>() << '\n';

         systemd = windowd.get_child("G");
  std::cout << systemd.get_value<std::string>() << '\n';


}
