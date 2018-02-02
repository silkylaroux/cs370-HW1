CC=gcc
FILES=Invoker.c Analyze.c
FILES2 = Analyze.h
OUT_EXE = Invoker.o
all: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES)
clean:
	rm -f *.o $(OUT_EXE)
tar:
	tar -cv $(FILES) $(FILES2) README.txt > Damian-Armijo-HW1.tar

