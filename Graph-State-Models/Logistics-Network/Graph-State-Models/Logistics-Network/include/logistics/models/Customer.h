// ============================================================================
// CUSTOMER
// ============================================================================
// PRODUCTION ROLE:
//   Domain entity representing a demand point in the logistics world.
//
// DEPENDS ON:
//   Position.
//
// USED BY:
//   CustomerGenerator -> Simulation -> ClusterDetector -> OrderGenerator.
//
// DOWNSTREAM:
//   Planning uses customer positions.
//   Order generation uses customer identity.
//   Visualization renders customer locations.
//
// SHOULD CONTAIN:
//   - Stable customer ID.
//   - Position.
//   - Lightweight demand/order-related state.
//
// DSA CONCEPT:
//   Domain data consumed by clustering and graph construction.
//
// DO NOT:
//   - Generate customers here.
//   - Detect clusters here.
//   - Calculate delivery routes here.
//   - Make Customer responsible for Store/Graph knowledge.
#pragma once

#include "Position.h"

namespace logistics {

class Customer {
public:
    Customer(int id, Position position);
    int getId() const;
    const Position& getPosition() const;

private:
    int id_;
    Position position_;
};

} // namespace logistics
