// ============================================================================
// SIMULATOR APPLICATION
// ============================================================================
// PRODUCTION ROLE:
//   Executable entry point for running the logistics simulation.
//
// ARCHITECTURE:
//   This is an application shell around the core library.
//
//   main()
//      -> configuration
//      -> simulation construction
//      -> simulation run
//      -> output/reporting
//
// DO NOT:
//   Reimplement customer generation, clustering, fulfillment, or routing here.
//   The application should remain thin.
