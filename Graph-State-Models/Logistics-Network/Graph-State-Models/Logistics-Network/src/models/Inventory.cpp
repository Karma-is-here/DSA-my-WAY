#include "logistics/models/Inventory.h"

namespace logistics {

void Inventory::addStock(int productId, int quantity) {
    stock_[productId] += quantity;
}

bool Inventory::hasStock(int productId, int quantity) const {
    auto it = stock_.find(productId);

    if (it == stock_.end()) {
        return false;
    }

    return it->second >= quantity;
}

bool Inventory::reserveStock(int productId, int quantity) {
    if (!hasStock(productId, quantity)) {
        return false;
    }

    stock_[productId] -= quantity;
    return true;
}

int Inventory::getStock(int productId) const {
    auto it = stock_.find(productId);

    if (it == stock_.end()) {
        return 0;
    }

    return it->second;
}

} // namespace logistics
