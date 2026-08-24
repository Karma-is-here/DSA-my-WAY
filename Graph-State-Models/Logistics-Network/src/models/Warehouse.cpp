// ============================================================================
// SRC/MODELS/WAREHOUSE.CPP
// ============================================================================
// IMPLEMENTATION PLACEHOLDER: Warehouse behavior/invariants; do not put routing here.
//
// CONNECTIONS:
//   See the corresponding header under include/logistics/ for the contract.
//   This .cpp owns implementation; the header owns the public interface.
//
// PRODUCTION RULE:
//   Keep domain rules in the correct subsystem. Prefer small, testable
//   functions over a monolithic implementation.
//
#include "logistics/models/Warehouse.h"

namespace logistics {

Warehouse::Warehouse(int id, Position position)
    : id_(id),
      position_(position) {}

int Warehouse::getId() const {
    return id_;
}

const Position& Warehouse::getPosition() const {
    return position_;
}

} // namespace logistics