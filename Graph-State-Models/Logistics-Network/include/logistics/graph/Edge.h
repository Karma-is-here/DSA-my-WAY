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

class Edge {
public:
    Edge(int destination, double travelTime);

    int getDestination() const;
    double getTravelTime() const;

private:
    int destination_;
    double travelTime_;
};

} // namespace logistics
