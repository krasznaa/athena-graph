# Copyright (C) 2002-2024 CERN for the benefit of the ATLAS collaboration

# CMake include(s).
cmake_minimum_required(VERSION 3.14)
include(FetchContent)

# Declare the ATLAS package name.
atlas_subdir(bjoern-andres-graph)

# Silence FetchContent warnings with CMake >=3.24.
if(POLICY CMP0135)
   cmake_policy(SET CMP0135 NEW)
endif()

# Set where to get bjoern-andres/graph from.
set(ATLAS_GRAPH_SOURCE
   "GIT_REPOSITORY;https://github.com/bjoern-andres/graph.git;GIT_TAG;master"
   CACHE STRING "Source of the bjoern-andres/graph code")
mark_as_advanced(ATLAS_GRAPH_SOURCE)

# Fetch the bjoern-andres/graph code.
FetchContent_Declare(bjoern-andres-graph ${ATLAS_GRAPH_SOURCE})

# Configure the build of bjoern-andres/graph.
FetchContent_Populate(bjoern-andres-graph)

# Set up an interface library for the bjoern-andres/graph code.
add_library(bjoern-andres-graph INTERFACE)
target_include_directories(bjoern-andres-graph INTERFACE
   $<BUILD_INTERFACE:${bjoern-andres-graph_SOURCE_DIR}/include>)
