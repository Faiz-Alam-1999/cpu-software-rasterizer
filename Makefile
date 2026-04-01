# for (Linux/macOS):	use 	build, 		run, 		clean 		
# for (Windows):		use 	build-win, 	run-win,	clean-win	

build:
	gcc ./src/*.c -I"./SDL2/include" -L"./SDL2/lib" -lSDL2 -lm -o rasterizer
build-win:
	gcc ./src/*.c -I".\SDL2\include" -L".\SDL2\lib" -lmingw32 -lSDL2 -lm -o rasterizer.exe
	copy SDL2\SDL2.dll	
	 		
run: 
	./rasterizer
run-win:
	rasterizer.exe

clean:
	rm -f rasterizer
clean-win:
	del rasterizer.exe
	del SDL2.dll

	
# (Windows Note):
# In  Windows to work with SDL2 
# you need SDL2.dll  
# just next to the rasterizer.exe


.PHONY: build build-win run run-win clean clean-win
