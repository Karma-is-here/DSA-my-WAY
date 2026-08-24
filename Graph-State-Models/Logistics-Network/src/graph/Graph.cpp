// ============================================================================
// SRC/GRAPH/GRAPH.CPP
// ============================================================================
// IMPLEMENTATION: adjacency-list graph operations. Keep this generic and logistics-agnostic.
//
#include "logistics/graph/Graph.h"

namespace logistics {

void Graph::addEdge(int from, int to, double travelTime) {
    adjacency_[from].push_back({to, travelTime});
    adjacency_.try_emplace(to);
}

const std::vector<Edge>& Graph::neighbors(int node) const {
    static const std::vector<Edge> noNeighbors;
    const auto it = adjacency_.find(node);
    return it == adjacency_.end() ? noNeighbors : it->second;
}

} // namespace logistics
// CONNECTIONS:
//   See the corresponding header under include/logistics/ for the contract.
//   This .cpp owns implementation; the header owns the public interface.
//
// PRODUCTION RULE:
//   Keep domain rules in the correct subsystem. Prefer small, testable
//   functions over a monolithic implementation.
//
