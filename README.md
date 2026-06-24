# 🏭 Prodlog

> A command-line factory production tracking system built in C++.

Prodlog simulates the core data management layer of a manufacturing execution system (MES), the kind of software that runs on real factory floors. It lets operators log machine activity, track inventory, and generate production reports entirely from the terminal.

---

## Features

- **Product inventory** - add, list, and search products by name, quantity, and unit price
- **Machine registry** - register machines by type (lathe, mill, press) and toggle them on/off
- **Production logging** - record which machine produced what, and how many units
- **Summary reports** - total units produced, revenue, and per-machine output history
- **Data persistence** - all inventory and logs are saved to disk and reloaded automatically on startup

---

## Why I Built This

Small and mid-size manufacturers lose hours every week to paper logs and spreadsheets. Prodlog is a ground-up implementation of the core logic behind industrial MES software, machine accountability, inventory tracking, and production traceability; using only C++ and the standard library.

It targets the same problem space as systems like SAP and Ignition, at a scale that makes the underlying design decisions visible and understandable.

---

## Tech Stack

| Tool | Purpose |
|---|---|
| C++17 | Core application language |
| STL (`vector`, `fstream`, `algorithm`) | Data structures and file I/O |
| CMake 3.15+ | Build system |
| Git | Version control |

---

## Getting Started

### Prerequisites

- A C++17 compiler
- CMake 3.15 or higher
- Git

### Build

```bash
git clone https://github.com/yourusername/prodlog.git
cd prodlog
mkdir build && cd build
cmake ..
cmake --build .
```

### Run

```bash
./prodlog        # macOS / Linux
prodlog.exe      # Windows
```

```
=== Prodlog — Factory Production Tracker ===
1. Add product
2. List products
3. Add machine
4. List machines
5. Toggle machine on/off
6. Save all data
7. Load data
8. Add logs
0. Exit
```

Data is saved to `inventory.txt` and `production_log.txt` in the working directory.

**Example session:**

```
Choice: 1
Product name: Steel Bolt M8
Quantity: 500
Price per unit: $0.15
Product added!

Choice: 7
Machine ID: 1
Product name: Steel Bolt M8
Units produced: 120
Production run logged.

Choice: 8

========= PRODUCTION SUMMARY =========
Total units produced : 120
Total log entries    : 1
Most recent run      : Machine #1 made 120x Steel Bolt M8
======================================
```

---

## Key Concepts Demonstrated

- **Object-oriented design** — `Product`, `Machine`, and `ProductionLog` as decoupled classes with clear responsibilities
- **STL containers** — `std::vector` for dynamic collections
- **File I/O** — structured read/write with `std::ifstream` / `std::ofstream`
- **Input validation** — handles malformed input without crashing
- **Separation of concerns** — logic, display, and persistence kept in separate functions

---

## Credits
Created by Louis Nguyen