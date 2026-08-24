// ============================================================================
// SRC/MAIN.CPP
// ============================================================================
// IMPLEMENTATION: thin application entry point. Configure, construct, run; do not put business logic here.
//
// CONNECTIONS:
//   See the corresponding header under include/logistics/ for the contract.
//   This .cpp owns implementation; the header owns the public interface.
//
// PRODUCTION RULE:
//   Keep domain rules in the correct subsystem. Prefer small, testable
//   functions over a monolithic implementation.
//
#include "logistics/simulation/SimulationState.h"
#include "logistics/simulation/WorldInitializer.h"

#include <iostream>

int main() {

    logistics::SimulationState state;

    logistics::WorldInitializer initializer;
    initializer.initialize(state);

    std::cout << "Logistics simulation initialized.\n";
    std::cout << "Customers: "
              << state.getCustomers().size()
              << '\n';

    std::cout << "Stores: "
              << state.getStores().size()
              << '\n';

    std::cout << "Warehouses: "
              << state.getWarehouses().size()
              << '\n';

    std::cout << "Product count: "
              << state.getProducts().size()
              << '\n';

    std::cout << "Orders: "
              << state.getOrders().size()
              << '\n';

    return 0;
}
