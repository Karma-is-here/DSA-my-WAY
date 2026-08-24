#pragma once

#include <unordered_map>

namespace logistics {

class Inventory {
public:
    void addStock(int productId, int quantity);

    bool hasStock(int productId, int quantity) const;

    bool reserveStock(int productId, int quantity);

    int getStock(int productId) const;

private:
    std::unordered_map<int, int> stock_;
};

} // namespace logistics