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

## Build & Run
1. Install [SDL2](https://www.libsdl.org/)  
2. Run:
```bash
make
./rasterizer
```

<p align="center">
  <img src="screenshots/triangles.png" alt="Triangle Rasterizer" width="400"/>
</p>
