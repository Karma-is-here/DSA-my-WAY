#include "logistics/models/Product.h"

#include <utility>

namespace logistics {

Product::Product(int id, std::string name)
    : id_(id), name_(std::move(name)) {}

int Product::getId() const {
    return id_;
}

const std::string& Product::getName() const {
    return name_;
}

} // namespace logistics
