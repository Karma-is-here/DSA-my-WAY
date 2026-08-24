# Simulation Design

## Time

Start with:
- 1 simulation tick = 1 day.

## Per-tick lifecycle

1. Advance simulation clock.
2. Generate customers.
3. Detect meaningful geographic demand changes.
4. Evaluate store-opening policy.
5. Add approved stores.
6. Generate customer orders.
7. Check inventory.
8. Generate fulfillment plans.
9. Generate delivery legs.
10. Calculate routes.
11. Record results.

## Reproducibility

Use an explicit random seed during development/testing so the same simulation
can be replayed.

## First milestone

Run a 30-day simulation where customers grow and a store is automatically
proposed/created when a customer cluster crosses the configured threshold.
