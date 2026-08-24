# Logistics DSA

A systems-first C++ exploration of Data Structures & Algorithms through a
simulated logistics network.

## Core idea

Instead of implementing DSA in isolation, this project builds a small
logistics decision engine and introduces algorithms only when the system
needs them.

## System pipeline

Customer growth
    -> geographic clustering
    -> demand-center calculation
    -> store establishment
    -> logistics network
    -> customer orders
    -> inventory availability
    -> fulfillment strategy
    -> delivery planning
    -> shortest-path routing
    -> simulation / visualization

## Four delivery types

- STORE_TO_CUSTOMER
- STORE_TO_STORE
- WAREHOUSE_TO_STORE
- WAREHOUSE_TO_CUSTOMER

## Important design principle

The graph is infrastructure, not the product.

The product is the logistics simulation. Graph algorithms exist because the
logistics system needs them.

See docs/ for architecture, simulation rules, and engineering decisions.
