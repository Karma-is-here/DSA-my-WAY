// ============================================================================
// EDGE
// ============================================================================
// PRODUCTION ROLE:
//   Represents one connection between two nodes in the logistics network.
//
// DEPENDS ON:
//   Destination node ID + edge weight.
//
// USED BY:
//   Graph.
//
// DSA CONCEPT:
//   Fundamental graph representation.
//   The initial weight represents travel time.
//
// FUTURE:
//   Additional weights such as monetary cost can be introduced without
//   rewriting the domain model.
//
// DO NOT:
//   Put Dijkstra/BFS logic here.
#pragma once

namespace logistics {

struct Edge {
    int destination{};
    double travelTime{};
};

} // namespace logistics
