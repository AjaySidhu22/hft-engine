# HFT Order Matching Engine

A High-Frequency Trading Order Matching Engine built in C++17.

## What This Does
Simulates the core system that powers stock exchanges like NASDAQ, NSE, BSE.
Receives buy/sell orders, matches them at high speed, produces trade executions.

## Project Structure
```
hft-engine/
├── src/          # Source files (.cpp)
├── include/      # Header files (.h)
├── tests/        # Unit tests
├── build/        # Compiled output
└── CMakeLists.txt
```

## How to Build
```bash
g++ -std=c++17 -Wall -g -I include src/main.cpp -o build/hft-engine
```

## Progress
- [x] Day 1 - Project setup, first C++ program