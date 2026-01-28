# cpu-software-rasterizer
CPU-based software rasterizer written in C from scratch to understand the graphics pipeline from first principles.


# CPU Software Rasterizer

A CPU-based software rasterizer written in C **from scratch** to explore the fundamentals of the graphics pipeline and low-level rendering.

I enjoy tackling complex systems, observing how they behave, and discovering patterns through experimentation. For me, building and studying low-level systems like this is not a task—it’s the reward itself.

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
