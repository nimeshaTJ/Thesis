
#MAC
# COMMON=-O2 -I../../include -L../../bin -mavx -pthread
# LIBS = -w -lmujoco200 -lglfw.3
# CC = gcc

#LINUX
MUJOCO_DIR = /home/nimesha/.mujoco/mujoco-3.1.4
COMMON=-O2 -I$(MUJOCO_DIR)/include -L$(MUJOCO_DIR)/lib -mavx -pthread -Wl,-rpath,'$$ORIGIN'
LIBS = -lmujoco -lGL -lm -lglfw #-lglew
CC = gcc

#WINDOWS
# COMMON=/O2 /MT /EHsc /arch:AVX /I../../include /Fe../../bin/
# LIBS = ../../lib/glfw3dll.lib  ../../lib/mujoco.lib
# CC = cl

ROOT = thesis

all:
	$(CC) $(COMMON) main.c $(LIBS) -o $(MUJOCO_DIR)/bin/$(ROOT)

main.o:
	$(CC) $(COMMON) -c main.c

clean:
	rm *.o $(MUJOCO_DIR)/bin/$(ROOT)
