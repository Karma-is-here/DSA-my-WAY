#pragma once

#include <string>

namespace logistics {

class Product {
public:
    Product(int id, std::string name);
    int getId() const;
    const std::string& getName() const;

private:
    int id_;
    std::string name_;
};

} // namespace logistics
