// ============================================================================
// SIMULATION
// ============================================================================
// PRODUCTION ROLE:
//   Orchestrates the simulated world and advances time.
//
// DEPENDS ON:
//   Domain models, CustomerGenerator, OrderGenerator, planning, fulfillment,
//   graph infrastructure.
//
// USED BY:
//   Application entry point.
//
// CORE RESPONSIBILITY:
//   Coordinate events in a deterministic order:
//
//   1. Advance time.
//   2. Generate customer demand.
//   3. Detect important planning changes.
//   4. Establish infrastructure when policy requires it.
//   5. Generate orders.
//   6. Fulfill orders.
//   7. Plan deliveries.
//   8. Record/report state.
//
// IMPORTANT:
//   Simulation is an orchestrator, not a giant god class.
//   Algorithms belong in their respective components.
//
// DSA CONCEPT:
//   Provides the environment in which algorithms operate.
//
// FUTURE:
//   Event queue, simulation clock, reproducible random seed, snapshots.
//
// DO NOT:
//   Implement BFS/Dijkstra/clustering directly inside Simulation.
#pragma once

namespace logistics {

class Simulation {
public:
    void tick();
};

} // namespace logistics
