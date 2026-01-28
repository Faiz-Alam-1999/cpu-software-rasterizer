build:
	gcc ./src/*.c -I"C:\SDL2\include" -L"C:\SDL2\lib" -lmingw32 -lSDL2 -lm -o rasterizer.exe

run:
	./rasterizer.exe

clean:
	del rasterizer.exe