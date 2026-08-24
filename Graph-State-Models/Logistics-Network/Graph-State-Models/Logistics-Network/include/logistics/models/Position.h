// ============================================================================
// POSITION
// ============================================================================
// PRODUCTION ROLE:
//   Small value object representing a location in the simulated 2D world.
//
// USED BY:
//   Customer, Store, Warehouse, DemandCenter, graph/network construction,
//   visualization.
//
// DEPENDS ON:
//   Standard C++ types only.
//
// DOWNSTREAM:
//   Every entity that has a physical location.
//
// SHOULD CONTAIN:
//   - x/y coordinates.
//   - Small geometry helpers only when they are broadly reusable.
//
// FUTURE:
//   - distanceTo()
//   - equality/comparison helpers.
//   - optional coordinate normalization.
//
// DSA CONCEPT:
//   Not a DSA structure; it is domain state that allows spatial algorithms.
//
// DO NOT:
//   Put customer/store logic here.
//   Put clustering or routing algorithms here.
#pragma once

namespace logistics {

struct Position {
    double x{};
    double y{};

    double distanceTo(const Position& other) const;
};

} // namespace logistics
