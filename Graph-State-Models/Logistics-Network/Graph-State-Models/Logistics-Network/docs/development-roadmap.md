# Development Roadmap

Build vertically, not file-by-file.

## Phase 1 — Build system
CMake -> compile -> run.

## Phase 2 — Domain
Position -> Customer -> Store -> Warehouse -> Order -> Delivery.

## Phase 3 — Simulation
Simulation clock -> CustomerGenerator -> 30-day customer growth.

## Phase 4 — Planning
ClusterDetector -> DemandCenter -> StorePlanner.

## Phase 5 — Network
Graph -> BFS/DFS -> dynamic logistics network.

## Phase 6 — Demand
OrderGenerator -> Inventory.

## Phase 7 — Fulfillment
FulfillmentEngine -> compare feasible strategies.

## Phase 8 — Routing
DeliveryPlanner -> Dijkstra -> route reconstruction.

## Phase 9 — End-to-end
Customer growth + stores + orders + inventory + fulfillment + routing.

## Phase 10 — Quality
Unit tests, edge cases, deterministic replay, logging/reporting.

## Phase 11 — Visualization
Separate visualizer application reading the core simulation state.
