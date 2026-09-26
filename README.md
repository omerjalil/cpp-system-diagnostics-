# C++ Hardware Architecture Diagnostic Tool

A lightweight C++ console application designed to inspect system-level execution parameters, pointer width, and logical processor counts.

## Overview
Built as a Computer Engineering project to demonstrate basic C++ execution, memory pointer inspection, and system concurrency features without external library dependencies.

## Key Features
- Detects system execution architecture (32-bit vs. 64-bit) via memory pointer size
- Queries available CPU thread hardware concurrency
- Zero external dependencies (Standard C++ Library only)

## How to Build & Run
```bash
g++ -o sys_info sys_info.cpp
./sys_info
