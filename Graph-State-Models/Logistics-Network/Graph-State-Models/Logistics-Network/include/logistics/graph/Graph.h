// ============================================================================
// GRAPH
// ============================================================================
// PRODUCTION ROLE:
//   Generic graph infrastructure representing connectivity between logistics
//   nodes. It should not know whether a node is a store, warehouse, or customer.
//
// DEPENDS ON:
//   Edge.
//
// USED BY:
//   ClusterDetector (customer-neighbour graph).
//   DeliveryPlanner / routing (logistics network).
//   BFS / Dijkstra.
//
// DSA CONCEPT:
//   Adjacency-list graph representation.
//
// SHOULD SUPPORT:
//   - Add/remove nodes and edges.
//   - Query neighbors.
//   - Query edge weights.
//   - Provide data to traversal/shortest-path algorithms.
//
// IMPORTANT DESIGN:
//   Keep Graph generic. Higher-level logistics code decides what node IDs mean.
//
// DO NOT:
//   - Generate customers.
//   - Decide store placement.
//   - Know inventory.
//   - Decide fulfillment strategy.
//   - Draw anything.
//
// FUTURE:
//   Directed edges, configurable weights, disconnected-node handling.
#pragma once

#include "Edge.h"
#include <unordered_map>
#include <vector>

namespace logistics {

class Graph {
public:
    void addEdge(int from, int to, double travelTime);
    const std::vector<Edge>& neighbors(int node) const;

private:
    std::unordered_map<int, std::vector<Edge>> adjacency_;
};

} // namespace logistics
