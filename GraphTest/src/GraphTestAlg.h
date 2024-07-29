// Copyright (C) 2002-2024 CERN for the benefit of the ATLAS collaboration
#ifndef GRAPHTEST_GRAPHTESTALG_H
#define GRAPHTEST_GRAPHTESTALG_H 1

// Framework include(s).
#include "AthenaBaseComps/AthAlgorithm.h"

/// Test algorithm
class GraphTestAlg : public AthAlgorithm
{

public:
   // Inherit the base class's constructor(s)
   using AthAlgorithm::AthAlgorithm;

   /// @name Functions inherited from the base class
   /// @{

   /// Function initialising the algorithm
   virtual StatusCode initialize() override;
   /// Function executing the algorithm
   virtual StatusCode execute() override;

   /// @}

}; // class GraphTestAlg

#endif // GRAPHTEST_GRAPHTESTALG_H
