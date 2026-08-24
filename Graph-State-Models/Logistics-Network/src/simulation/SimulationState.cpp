#include "logistics/simulation/SimulationState.h"

namespace logistics {

int SimulationState::getCurrentDay() const {
    return getCurrentDay_;
}

void SimulationState::advanceDay() {
    ++getCurrentDay_;
}

std::unordered_map<int, Customer>& SimulationState::getCustomers() {
    return customers_;
}

std::unordered_map<int, Store>& SimulationState::getStores() {
    return stores_;
}

std::unordered_map<int, Warehouse>& SimulationState::getWarehouses() {
    return warehouses_;
}

std::unordered_map<int, Product>& SimulationState::getProducts() {
    return products_;
}

std::unordered_map<int, Order>& SimulationState::getOrders() {
    return orders_;
}

Graph& SimulationState::getLogisticsGraph() {
    return logisticsGraph_;
}

} // namespace logistics