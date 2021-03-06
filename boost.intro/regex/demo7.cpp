#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include "boost/regex.hpp"

int main() {
  boost::regex reg("/");
  std::string s="Split/Values/Separated/By/Slashes,";
  std::vector<std::string> vec;
  boost::sregex_token_iterator it(s.begin(),s.end(),reg,-1);
  boost::sregex_token_iterator end;
  while (it!=end) 
    vec.push_back(*it++);

  assert(vec.size()==std::count(s.begin(),s.end(),'/')+1);
  assert(vec[0]=="Split");

  std::copy(vec.begin(), vec.end(), std::ostream_iterator<std::string>(std::cout, "\n"));

  return 0;
}

