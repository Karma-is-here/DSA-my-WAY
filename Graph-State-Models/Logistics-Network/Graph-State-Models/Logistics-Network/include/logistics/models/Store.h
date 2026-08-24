// ============================================================================
// STORE
// ============================================================================
// PRODUCTION ROLE:
//   Local fulfillment facility capable of serving customers and exchanging
//   inventory with other facilities.
//
// DEPENDS ON:
//   Position.
//
// USED BY:
//   StorePlanner -> Simulation/World -> FulfillmentEngine -> DeliveryPlanner.
//
// SHOULD CONTAIN:
//   - Stable store ID.
//   - Position.
//   - Inventory state/reference.
//   - Operational status when needed.
//
// DSA CONCEPT:
//   A domain node that later becomes a node in the logistics graph.
//
// DO NOT:
//   - Decide when it should be created.
//   - Calculate routes.
//   - Fulfill orders by itself.
//   Those responsibilities belong to planning/fulfillment.

#pragma once

#include "logistics/models/Position.h"

namespace logistics {

class Store {
public:
    Store(int id, Position position);

    int getId() const;
    const Position& getPosition() const;

private:
    int id_;
    Position position_;
};

} // namespace logistics
