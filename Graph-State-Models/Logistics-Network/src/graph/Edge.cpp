// ============================================================================
// SRC/GRAPH/EDGE.CPP
// ============================================================================
// IMPLEMENTATION PLACEHOLDER: Keep Edge lightweight; most graph behavior belongs to Graph.
//
// CONNECTIONS:
//   See the corresponding header under include/logistics/ for the contract.
//   This .cpp owns implementation; the header owns the public interface.
//
// PRODUCTION RULE:
//   Keep domain rules in the correct subsystem. Prefer small, testable
//   functions over a monolithic implementation.
//
#include "logistics/graph/Edge.h"

namespace logistics {

Edge::Edge(int destination, double travelTime)
    : destination_(destination),
      travelTime_(travelTime) {
}

int Edge::getDestination() const {
    return destination_;
}

double Edge::getTravelTime() const {
    return travelTime_;
}

} // namespace logistics