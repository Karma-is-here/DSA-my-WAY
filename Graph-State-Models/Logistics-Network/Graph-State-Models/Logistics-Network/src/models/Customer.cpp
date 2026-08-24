// ============================================================================
// SRC/MODELS/CUSTOMER.CPP
// ============================================================================
// IMPLEMENTATION PLACEHOLDER: Customer behavior only if domain invariants require methods.
//
// CONNECTIONS:
//   See the corresponding header under include/logistics/ for the contract.
//   This .cpp owns implementation; the header owns the public interface.
//
// PRODUCTION RULE:
//   Keep domain rules in the correct subsystem. Prefer small, testable
//   functions over a monolithic implementation.
//

#include "logistics/models/Customer.h"

namespace logistics {

Customer::Customer(int id, Position position)
    : id_(id), position_(position) {}

int Customer::getId() const {
    return id_;
}

const Position& Customer::getPosition() const {
    return position_;
}

} // namespace logistics
