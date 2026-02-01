BUILD_DIR = .cmake-build
TARGET = rasterizer

ifeq ($(OS),Windows_NT)
	TARGET := $(TARGET).exe
endif

all:
	cmake -S . -B $(BUILD_DIR)
	cmake --build $(BUILD_DIR)

run:
	./$(TARGET)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
