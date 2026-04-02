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
- C compiler (GCC or Clang)
- SDL2 development libraries (Linux / macOS only)
-- #### 🐧 Linux (Debian-based)
```bash
sudo apt update 
sudo apt install libsdl2-dev
```
-- #### 🍎 macOS (Homebrew)
```bash
brew install sdl2
```

- pkg-config (recommended)

> Linux/macOS builds use system-installed SDL2 via pkg-config.

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
