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
### For Linux / macOS
1. Build:
```bash
make
```
2. Run:
```bash
make run
```
3. Clean:
```bash
make clean
```

### For Windows
1. Build:
```bash
make build-win
```
2. Run:
```bash
make run-win
```
3. Clean:
```bash
make clean-win
```

## Demo / Screenshot
![Triangle Rasterizer](screenshots/triangles.png)
