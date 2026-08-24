// ============================================================================
// ORDER
// ============================================================================
// PRODUCTION ROLE:
//   Represents a customer's demand request.
//
// DEPENDS ON:
//   Standard containers/types; references customer identity by ID.
//
// USED BY:
//   OrderGenerator -> FulfillmentEngine -> DeliveryPlanner.
//
// SHOULD CONTAIN:
//   - Order ID.
//   - Customer ID.
//   - Requested items and quantities.
//   - Lifecycle status when the simulation needs it.
//
// DSA CONCEPT:
//   Input to fulfillment/optimization logic rather than a DSA structure itself.
//
// DO NOT:
//   - Decide fulfillment source.
//   - Calculate routes.
//   - Mutate store inventory directly.
//   Those belong to fulfillment services.
#pragma once

#include <vector>

namespace logistics {

struct OrderItem {
    int productId;
    int quantity;
};

enum class OrderStatus {
    CREATED,
    PROCESSING,
    FULFILLED,
    CANCELLED
};

class Order {
public:
    Order(
        int id,
        int customerId,
        int arrivalTime,
        std::vector<OrderItem> items
    );

    int getId() const;
    int getCustomerId() const;
    int getArrivalTime() const;

    const std::vector<OrderItem>& getItems() const;

    OrderStatus getStatus() const;
    void setStatus(OrderStatus status);

private:
    int id_;
    int customerId_;
    int arrivalTime_;

    std::vector<OrderItem> items_;
    OrderStatus status_;
};

} // namespace logistics