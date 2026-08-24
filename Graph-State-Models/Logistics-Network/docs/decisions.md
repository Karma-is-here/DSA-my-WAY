# Engineering Decisions

## 1. C++ first

The first implementation is C++ only so the data structures, algorithms, and
simulation mechanics remain explicit.

## 2. Synthetic 2D world

No real maps initially. Coordinates make spatial algorithms and visualization
easy to understand without introducing GIS complexity.

## 3. Lightweight inventory

Inventory is deliberately limited. Its purpose is to create fulfillment
constraints and split-order scenarios, not to become a separate ERP system.

## 4. Four delivery types

- Store -> Customer
- Store -> Store
- Warehouse -> Store
- Warehouse -> Customer

## 5. Graph is generic

The graph should not know what a store or customer is. Domain code maps
logistics entities to graph node IDs.

## 6. Algorithms are introduced by system need

BFS/DFS appears when customer clusters/connectivity need to be discovered.
Dijkstra appears when delivery routes need minimum travel time.

## 7. Visualization is downstream

The visualizer observes simulation state. It does not contain logistics rules.

## 8. Production-style separation

Planning decides infrastructure.
Fulfillment decides sourcing.
Delivery planning decides movement.
Graph algorithms solve graph subproblems.
Simulation orchestrates the lifecycle.
