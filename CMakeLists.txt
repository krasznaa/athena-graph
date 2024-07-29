# Copyright (C) 2002-2024 CERN for the benefit of the ATLAS collaboration

# Set up CMake.
cmake_minimum_required(VERSION 3.10)
project(athena-graph VERSION 0.0.1 LANGUAGES CXX)

# Find Athena.
find_package(Athena REQUIRED)

# Set up the ATLAS project.
atlas_project(USE "Athena" "${Athena_VERSION}")

# Generate an environment setup script.
lcg_generate_env(SH_FILE "${CMAKE_BINARY_DIR}/${ATLAS_PLATFORM}/env-setup.sh")
install(FILES "${CMAKE_BINARY_DIR}/${ATLAS_PLATFORM}/env-setup.sh"
   DESTINATION .)
