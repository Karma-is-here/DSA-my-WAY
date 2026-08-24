// ============================================================================
// SRC/MODELS/POSITION.CPP
// ============================================================================
// IMPLEMENTATION PLACEHOLDER: Position helpers only if Position.h later grows behavior.
//
// CONNECTIONS:
//   See the corresponding header under include/logistics/ for the contract.
//   This .cpp owns implementation; the header owns the public interface.
//
// PRODUCTION RULE:
//   Keep domain rules in the correct subsystem. Prefer small, testable
//   functions over a monolithic implementation.
//

#include "logistics/models/Position.h"

#include <cmath>

namespace logistics {

double Position::distanceTo(const Position& other) const {
    const double dx = x - other.x;
    const double dy = y - other.y;

    return std::sqrt(dx * dx + dy * dy);
}

} // namespace logistics
