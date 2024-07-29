# Copyright (C) 2002-2024 CERN for the benefit of the ATLAS collaboration

# Declare the ATLAS package name.
atlas_subdir(GraphTest)

# Build the test library.
atlas_add_component(GraphTestLib
   src/*.h src/*.cxx
   LINK_LIBRARIES AthenaBaseComps bjoern-andres-graph)
