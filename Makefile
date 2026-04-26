# for (Linux/macOS):	use 	build, 		run, 		clean 		
# for (Windows):		use 	build-win, 	run-win,	clean-win	

CC ?= gcc
SDL_FLAGS := $(shell pkg-config --cflags --libs sdl2 2>/dev/null)


build:
	$(CC) ./src/*.c $(SDL_FLAGS) -lm -o rasterizer

build-win:
	$(CC) ./src/*.c -I"./SDL2/include" -L"./SDL2/lib" -lmingw32 -lSDL2 -lm -o rasterizer.exe
	copy SDL2\SDL2.dll . 2>nul || cp SDL2/SDL2.dll .


run: 
	./rasterizer

run-win:
	rasterizer.exe


clean:
	rm -f rasterizer

clean-win:
	del rasterizer.exe 2>nul || rm -f rasterizer.exe
	del SDL2.dll 2>nul || rm -f SDL2.dll


.PHONY: build build-win run run-win clean clean-win
