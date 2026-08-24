// ============================================================================
// SRC/MODELS/STORE.CPP
// ============================================================================
// IMPLEMENTATION PLACEHOLDER: Store behavior/invariants; do not put planning here.
//
// CONNECTIONS:
//   See the corresponding header under include/logistics/ for the contract.
//   This .cpp owns implementation; the header owns the public interface.
//
// PRODUCTION RULE:
//   Keep domain rules in the correct subsystem. Prefer small, testable
//   functions over a monolithic implementation.
//
#include "logistics/models/Store.h"

namespace logistics {

Store::Store(int id, Position position)
    : id_(id),
      position_(position) {}

int Store::getId() const {
    return id_;
}

const Position& Store::getPosition() const {
    return position_;
}

} // namespace logistics