#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "boost/any.hpp"
class property {
private:
    std::string name_;
    boost::any value_;

public:
    property(const std::string& name, const boost::any& value)
        : name_(name),value_(value) {}

    std::string name() const { return name_; }

    boost::any &value() { return value_; }

    friend bool operator <(const property& lhs, const property& rhs) {
        return lhs.name_<rhs.name_;
    }
};

void print_names(const property& p) {
    std::cout << p.name() << "\n";
}

int main() {
    std::cout << "Example of using any for storing properties.\n";
    std::vector<property> properties;

    properties.push_back(
            property("B", 30));

    properties.push_back(
            property("A", std::string("Thirty something")));

    properties.push_back(property("C", 3.1415));

    std::sort(properties.begin(),properties.end());

    std::for_each(
            properties.begin(),
            properties.end(),
            print_names);

    std::cout << "\n";

    std::cout <<
        boost::any_cast<std::string>(properties[0].value()) << "\n";
    std::cout <<
        boost::any_cast<int>(properties[1].value()) << "\n";
    std::cout <<
        boost::any_cast<double>(properties[2].value()) << "\n";
}
