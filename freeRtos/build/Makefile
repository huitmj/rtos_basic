CC=gcc
DEFINE=-D__GCC_POSIX__=1 -DDEBUG_BUILD=1 -DUSE_STDIO=1
INCLUDE=-I../Common_Demo/include -I.. -I../FreeRTOS_Kernel/include -I../FreeRTOS_Kernel/portable/GCC/Posix
CFLAG=-O0 -g -Wall -c -fmessage-length=0 -pthread -lrt -Wno-pointer-sign

OBJ=./heap_3.o ./port.o ./list.o ./tasks.o ./main.o
all:
	$(CC) $(DEFINE) $(INCLUDE) $(CFLAG) -o"heap_3.o" "../FreeRTOS_Kernel/portable/MemMang/heap_3.c"
 
	$(CC) $(DEFINE) $(INCLUDE) $(CFLAG) -o"port.o" "../FreeRTOS_Kernel/portable/GCC/Posix/port.c"
 
	# $(CC) $(DEFINE) $(INCLUDE) $(CFLAG) -o"croutine.o" "../FreeRTOS_Kernel/croutine.c"

	$(CC) $(DEFINE) $(INCLUDE) $(CFLAG) -o"list.o" "../FreeRTOS_Kernel/list.c"
 
	# $(CC) $(DEFINE) $(INCLUDE) $(CFLAG) -o"queue.o" "../FreeRTOS_Kernel/queue.c"
 
	$(CC) $(DEFINE) $(INCLUDE) $(CFLAG) -o"tasks.o" "../FreeRTOS_Kernel/tasks.c"
 
	$(CC) $(DEFINE) $(INCLUDE) $(CFLAG) -o"main.o" "../main.c"
 
	#$(CC) -pthread -lrt -o "main"  ./heap_3.o  ./port.o  ./croutine.o ./list.o ./queue.o ./tasks.o  ./main.o
	$(CC) -pthread -lrt -o "main" $(OBJ)

clean:
	rm -f *.o main

