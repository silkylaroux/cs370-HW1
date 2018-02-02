CC=gcc
FILES=Invoker.c Analyze.c
OUT_EXE = Invoker.o
all: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES)
clean:
	rm -f *.o $(OUT_EXE)