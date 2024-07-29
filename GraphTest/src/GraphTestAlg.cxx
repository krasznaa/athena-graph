// Copyright (C) 2002-2024 CERN for the benefit of the ATLAS collaboration

// Graph include(s).
#include <andres/graph/graph.hxx>

// Local include(s).
#include "GraphTestAlg.h"

// Declare the component to Gaudi.
DECLARE_COMPONENT(GraphTestAlg)

StatusCode GraphTestAlg::initialize() {

   // Return gracefully.
   return StatusCode::SUCCESS;
}

StatusCode GraphTestAlg::execute() {

   // Set up a dummy object.
   [[maybe_unused]] andres::graph::Graph<> graph;

   // Return gracefully.
   return StatusCode::SUCCESS;
}
