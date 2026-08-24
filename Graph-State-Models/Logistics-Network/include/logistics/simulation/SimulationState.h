#pragma once

#include "logistics/models/Customer.h"
#include "logistics/models/Order.h"
#include "logistics/models/Product.h"
#include "logistics/models/Store.h"
#include "logistics/models/Warehouse.h"

#include "logistics/graph/Graph.h"

#include <unordered_map>

namespace logistics {

class SimulationState {
public:
    int getCurrentDay() const;
    void advanceDay();

    std::unordered_map<int, Customer>& getCustomers();
    std::unordered_map<int, Store>& getStores();
    std::unordered_map<int, Warehouse>& getWarehouses();
    std::unordered_map<int, Product>& getProducts();
    std::unordered_map<int, Order>& getOrders();

    Graph& getLogisticsGraph();

private:
    int getCurrentDay_ = 0;

    std::unordered_map<int, Customer> customers_;
    std::unordered_map<int, Store> stores_;
    std::unordered_map<int, Warehouse> warehouses_;
    std::unordered_map<int, Product> products_;
    std::unordered_map<int, Order> orders_;

    Graph logisticsGraph_;
};

} // namespace logistics
