#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "boost/any.hpp"
#include "boost/shared_ptr.hpp"

class A {
public:
    virtual ~A() {
        std::cout << "A::~A()\n";
    }

    void not_virtual() {
        std::cout << "A::not_virtual()\n";
    }

    virtual void is_virtual () {
        std::cout << "A:: is_virtual ()\n";
    }
};

class B : public A {
public:
    void not_virtual() {
        std::cout << "B::not_virtual()\n";
    }

    virtual void is_virtual () {
        std::cout << "B:: is_virtual ()\n";
    }
};

void foo(boost::any& a) {
    std::cout << "\n";

    // 试一下 boost::shared_ptr<A>
    try {
        boost::shared_ptr<A> ptr=
            boost::any_cast<boost::shared_ptr<A> >(a);
        std::cout << "This any contained a boost::shared_ptr<A>\n";
        ptr-> is_virtual ();
        ptr->not_virtual();
        return;
    }
    catch(boost::bad_any_cast& e) {}

    // 试一下 boost::shared_ptr<B>
    try {
        boost::shared_ptr<B> ptr=
            boost::any_cast<boost::shared_ptr<B> >(a);
        std::cout << "This any contained a boost::shared_ptr<B>\n";
        ptr-> is_virtual ();
        ptr->not_virtual();
        return;
    }
    catch(boost::bad_any_cast& e) {}

    // 如果是其它东西(如一个字符串), 则忽略它
    std::cout <<
        "The any didn't contain anything that \
        concerns this function!\n";
}

int main() {
    std::cout << "Example of any and shared_ptr\n";

    boost::any a1(boost::shared_ptr<A>(new A));
    boost::any a2(std::string("Just a string"));

    {
        boost::any b1(boost::shared_ptr<A>(new B));
        boost::any b2(boost::shared_ptr<B>(new B));
        std::vector<boost::any> vec;
        vec.push_back(a1);
        vec.push_back(a2);
        vec.push_back(b1);
        vec.push_back(b2);
        std::for_each(vec.begin(),vec.end(),foo);
        std::cout << "\n";
    }

    std::cout <<
        "any's b1 and b2 have been destroyed which means\n"
        "that the shared_ptrs' reference counts became zero\n";
}
