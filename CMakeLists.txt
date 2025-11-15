cmake_minimum_required(VERSION 3.10)
project(GameCharacterInventory)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include folderul cu header-ele
include_directories(${CMAKE_SOURCE_DIR}/inc)

# Adaugă sursele
add_executable(GameCharacterInventory
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/Inventory.cpp
    ${CMAKE_SOURCE_DIR}/src/GameCharacter.cpp
)

# Specifică unde să se salveze executabilul final
set_target_properties(GameCharacterInventory PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build
)
