# CPU Software Rasterizer

A CPU-based software rasterizer written in C **from scratch** to explore the fundamentals of the graphics pipeline and low-level rendering.

## Features (In Progress)
- Triangle rasterization ✅
- Depth buffering (Z-buffer) ⬜
- Backface culling ⬜
- Perspective-correct interpolation ⬜
- Texture mapping ⬜
- Basic lighting (Lambert/Phong) ⬜
- Performance optimizations (SIMD/multithreading) ⬜

## Prerequisites
1. Install [SDL2](https://www.libsdl.org/)  
2. Install [CMake](https://cmake.org/)

## Build & Run
1. Build:
```bash
make
```
2. Run:
```bash
make run
```

## Demo / Screenshot
![Triangle Rasterizer](screenshots/triangles.png)
