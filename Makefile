CC=gcc
DFLAGS=-Wall -w -g
MAIN_TEX=	"Author:Miguel Tlapa Juarez\
			\nDate:August 28 2017 \
			\nVersion 1.0"
INCLUDE=-I../algoritmos/sort/bubble_sort/ 
EXE=main_algo
SOURCE=main_algo.c \
../algoritmos/sort/bubble_sort/bubble_sort.c

debug: 
	@echo $(MAIN_TEX)
	@echo 'Debug Mode'
	$(CC) $(DFLAGS) $(INCLUDE) $(SOURCE) -o $(EXE)
	
release:
	@echo 'Release Mode'
	$(CC) $(INCLUDE) $(SOURCE) -o $(EXE)
	
gdb:
	@echo 'GDB MODE'
	gdb ./main_algo

run:
	@echo 'RUN MODE'
	./main_algo

clean:
	@echo 'CLEAN MODE'
	-rm -f main_algo