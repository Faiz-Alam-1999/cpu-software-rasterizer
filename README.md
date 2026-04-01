# 🖼️ CPU Software Rasterizer

A CPU-based software rasterizer written in C **from scratch** to explore the fundamentals of the graphics pipeline and low-level rendering.

## ✨ Features (In Progress)
- Triangle rasterization ✅
- Depth buffering (Z-buffer) ⬜
- Backface culling ⬜
- Perspective-correct interpolation ⬜
- Texture mapping ⬜
- Basic lighting (Lambert/Phong) ⬜
- Performance optimizations (SIMD/multithreading) ⬜

## ⚙️ Prerequisites
- GCC compiler [(Download / Installation Guide)](https://gcc.gnu.org/install/)

## 🛠️ Build, Run & Clean 
### 🐧 Linux / 🍎 macOS
```bash
make
make run
make clean
```
### 🪟 Windows
```bash
make build-win
make run-win
make clean-win
```

## 📸 Preview
![Triangle Rasterizer](screenshots/rasterizer.png)
