// ============================================================================
// SRC/GRAPH/GRAPH.CPP
// ============================================================================
// IMPLEMENTATION: adjacency-list graph operations. Keep this generic and logistics-agnostic.
//
#include "logistics/graph/Graph.h"

namespace logistics {

void Graph::addNode(int nodeId) {
    adjacencyList_.try_emplace(nodeId);
}

void Graph::addEdge(
    int source,
    int destination,
    double travelTime
) {
    addNode(source);
    addNode(destination);

    adjacencyList_[source].emplace_back(
        destination,
        travelTime
    );
}

const std::vector<Edge>& Graph::getNeighbors(int nodeId) const {

    static const std::vector<Edge> empty;

    auto it = adjacencyList_.find(nodeId);

    if (it == adjacencyList_.end()) {
        return empty;
    }

    return it->second;
}

bool Graph::hasNode(int nodeId) const {
    return adjacencyList_.find(nodeId)
        != adjacencyList_.end();
}

} // namespace logistics