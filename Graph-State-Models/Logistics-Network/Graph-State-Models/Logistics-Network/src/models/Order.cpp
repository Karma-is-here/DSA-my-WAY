// ============================================================================
// SRC/MODELS/ORDER.CPP
// ============================================================================
// IMPLEMENTATION PLACEHOLDER: Order lifecycle/invariant behavior.
//
// CONNECTIONS:
//   See the corresponding header under include/logistics/ for the contract.
//   This .cpp owns implementation; the header owns the public interface.
//
// PRODUCTION RULE:
//   Keep domain rules in the correct subsystem. Prefer small, testable
//   functions over a monolithic implementation.
//
#include "logistics/models/Order.h"

#include <utility>

namespace logistics {

Order::Order(
    int id,
    int customerId,
    int arrivalTime,
    std::vector<OrderItem> items
)
    : id_(id),
      customerId_(customerId),
      arrivalTime_(arrivalTime),
      items_(std::move(items)),
      status_(OrderStatus::CREATED) {}

int Order::getId() const {
    return id_;
}

int Order::getCustomerId() const {
    return customerId_;
}

int Order::getArrivalTime() const {
    return arrivalTime_;
}

const std::vector<OrderItem>& Order::getItems() const {
    return items_;
}

OrderStatus Order::getStatus() const {
    return status_;
}

void Order::setStatus(OrderStatus status) {
    status_ = status;
}

} // namespace logistics