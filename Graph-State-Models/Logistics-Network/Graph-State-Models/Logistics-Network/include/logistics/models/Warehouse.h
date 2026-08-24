// ============================================================================
// WAREHOUSE
// ============================================================================
// PRODUCTION ROLE:
//   Higher-level fulfillment facility that can supply stores or customers.
//
// DEPENDS ON:
//   Position.
//
// USED BY:
//   Simulation/World -> FulfillmentEngine -> DeliveryPlanner -> Graph.
//
// SHOULD CONTAIN:
//   - Stable warehouse ID.
//   - Position.
//   - Inventory state/reference.
//
// DSA CONCEPT:
//   Another domain node type represented in the logistics network.
//
// DO NOT:
//   Put warehouse allocation algorithms here.
//   Put shortest-path logic here.
#pragma once

#include "logistics/models/Position.h"

namespace logistics {

class Warehouse {
public:
    Warehouse(int id, Position position);

    int getId() const;
    const Position& getPosition() const;

private:
    int id_;
    Position position_;
};

} // namespace logistics
