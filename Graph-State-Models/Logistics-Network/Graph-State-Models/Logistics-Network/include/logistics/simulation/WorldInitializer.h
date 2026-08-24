#pragma once

#include "logistics/simulation/SimulationState.h"

namespace logistics {

class SimulationState;

class WorldInitializer {
public:
    void initialize(SimulationState& state);
};

} // namespace logistics