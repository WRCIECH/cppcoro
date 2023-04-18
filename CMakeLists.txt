# Preamble
cmake_minimum_required(VERSION 3.22.1)

project(cppcoro VERSION 1.3.1)

enable_testing()

# Project wide setup
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(cppcoro)

target_include_directories(cppcoro PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_sources(cppcoro PUBLIC
    lib/async_auto_reset_event.cpp
    lib/async_manual_reset_event.cpp
    lib/async_mutex.cpp
    lib/cancellation_state.cpp
    lib/cancellation_token.cpp
    lib/cancellation_source.cpp
    lib/cancellation_registration.cpp
    lib/lightweight_manual_reset_event.cpp
    lib/ip_address.cpp
    lib/ip_endpoint.cpp
    lib/ipv4_address.cpp
    lib/ipv4_endpoint.cpp
    lib/ipv6_address.cpp
    lib/ipv6_endpoint.cpp
    lib/static_thread_pool.cpp
    lib/auto_reset_event.cpp
    lib/spin_wait.cpp
    lib/spin_mutex.cpp
)

if(PROJECT_IS_TOP_LEVEL)
    # add_subdirectory(test)
    add_subdirectory(examples)
endif()
