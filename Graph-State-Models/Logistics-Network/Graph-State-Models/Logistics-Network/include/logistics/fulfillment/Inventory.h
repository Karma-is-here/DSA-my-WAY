// ============================================================================
// INVENTORY
// ============================================================================
// PRODUCTION ROLE:
//   Lightweight inventory state used to create realistic fulfillment constraints.
//
// IMPORTANT SCOPE:
//   This is NOT a full inventory management system.
//   Inventory exists because shortages force interesting logistics decisions.
//
// DEPENDS ON:
//   Standard product/quantity types.
//
// USED BY:
//   FulfillmentEngine.
//
// SHOULD SUPPORT:
//   - Query stock.
//   - Reserve stock.
//   - Consume stock.
//   - Check whether an item can be fulfilled.
//
// DSA CONNECTION:
//   Hash-map lookup is the practical structure behind fast product availability.
//
// DO NOT:
//   Decide routes or fulfillment strategies here.
#pragma once

#include "logistics/models/Inventory.h"
