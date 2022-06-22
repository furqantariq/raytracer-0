
BUILD_DIR := ./build
SRC_DIR := ./src

SRCS := $(SRC_DIR)/main.c $(SRC_DIR)/Vector3d.c
OBJS := $(BUILD_DIR)/main.c.o $(BUILD_DIR)/Vector3d.c.o

TARGET_EXEC := Raytracer

CFLAGS := -Wall

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@

$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -r $(BUILD_DIR)

