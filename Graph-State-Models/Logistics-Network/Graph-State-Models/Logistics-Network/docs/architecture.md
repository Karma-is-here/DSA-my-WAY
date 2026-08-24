# Architecture

## Layers

1. Domain models
2. Graph infrastructure
3. Simulation
4. Planning
5. Fulfillment
6. Applications
7. Tests

## Dependency direction

Domain models should be low-level and stable.

Planning and fulfillment consume domain state.

Applications consume the core engine.

Visualization, when added, should consume simulation state rather than own
business logic.

## Central principle

The logistics system is the product.
The graph is infrastructure used by the product.
