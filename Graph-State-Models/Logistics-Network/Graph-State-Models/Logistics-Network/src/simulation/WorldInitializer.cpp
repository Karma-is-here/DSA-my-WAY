#include "logistics/simulation/WorldInitializer.h"
#include "logistics/simulation/SimulationState.h"

#include "logistics/models/Product.h"
#include "logistics/models/Store.h"
#include "logistics/models/Warehouse.h"

namespace logistics {

void WorldInitializer::initialize(SimulationState& state) {

    state.getProducts().emplace(
        1,
        Product(1, "Laptop")
    );

    state.getProducts().emplace(
        2,
        Product(2, "Mouse")
    );

    state.getProducts().emplace(
        3,
        Product(3, "Keyboard")
    );

    state.getWarehouses().emplace(
        1,
        Warehouse(1, {20.0, 20.0})
    );

    state.getStores().emplace(
        1,
        Store(1, {40.0, 40.0})
    );

    state.getStores().emplace(
        2,
        Store(2, {70.0, 70.0})
    );
}

} // namespace logistics