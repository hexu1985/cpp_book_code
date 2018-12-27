#include <iostream>
#include "boost/function.hpp"

class keeping_state {
  int total_;
public:
  keeping_state():total_(0) {}

  int operator()(int i) {
    total_+=i;
    return total_;
  }

  int total() const {
    return total_;
  }
};

int main() {
  keeping_state ks;
  boost::function<int(int)> f1;
  f1=boost::ref(ks);

  boost::function<int(int)> f2;
  f2=boost::ref(ks);

  std::cout << "The current total is " << f1(10) << '\n';
  std::cout << "The current total is " << f2(10) << '\n';
  std::cout << "After adding 10 two times, the total is "
    << ks.total() << '\n';
}
