// ============================================================================
// CUSTOMER GENERATOR
// ============================================================================
// PRODUCTION ROLE:
//   Produces new customer entities as simulated demand grows.
//
// DEPENDS ON:
//   Customer + Position.
//   Randomness/configuration.
//
// USED BY:
//   Simulation.
//
// SHOULD HANDLE:
//   - Growth model.
//   - Spatial distribution.
//   - Reproducible random generation.
//
// IMPORTANT:
//   CustomerGenerator creates demand; it does not decide where stores belong.
//
// DSA CONNECTION:
//   Its output becomes the input to clustering and spatial/network algorithms.
//
// FUTURE:
//   Demand hotspots, population density, configurable growth curves.
//
// DO NOT:
//   Detect clusters or create stores here.
#pragma once

namespace logistics {

class CustomerGenerator {
public:
    // Add generation API here during implementation.
};

} // namespace logistics
