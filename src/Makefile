CC      = gcc
CFLAGS  = -Wall -g -D_POSIX_SOURCE -D_BSD_SOURCE -std=c99 -Werror -pedantic

.SUFFIXES: .c .o

.PHONY: all clean

all: assemble emulate

assemble: assemble.o ass_operations.o ass_symbols.o ass_tokeniser.o\
	 helperFunctions.o fileIO.o emulate_Error.o
	 $(CC) $(CFLAGS) assemble.o ass_operations.o ass_symbols.o ass_tokeniser.o\
	 	 helperFunctions.o fileIO.o emulate_Error.o -o assemble

assemble.o : assemble.c assemble.h
	$(CC) $(CFLAGS) assemble.c -c -o assemble.o

ass_operations.o : ass_operations.c ass_operations.h
	$(CC) $(CFLAGS) ass_operations.c -c -o ass_operations.o

ass_symbols.o : ass_symbols.c ass_symbols.h
	$(CC) $(CFLAGS) ass_symbols.c -c -o ass_symbols.o

ass_tokeniser.o : ass_tokeniser.c ass_tokeniser.h
	$(CC) $(CFLAGS) ass_tokeniser.c -c -o ass_tokeniser.o

fileIO.o : fileIO.c fileIO.h
	$(CC) $(CFLAGS) fileIO.c -c -o fileIO.o

emulate: emulate.o helperFunctions.o emulate_Branch.o emulate_DP.o\
	 emulate_Error.o emulate_Mul.o emulate_SDT.o
	$(CC) $(CFLAGS) emulate.o helperFunctions.o emulate_Branch.o emulate_DP.o\
	 emulate_Error.o emulate_Mul.o emulate_SDT.o -o emulate

emulate.o : emulate.c emulate.h
	$(CC) $(CFLAGS) emulate.c -c -o emulate.o

helperFunctions.o : helperFunctions.c helperFunctions.h
	$(CC) $(CFLAGS) helperFunctions.c -c -o helperFunctions.o

emulate_Branch.o : emulate_Branch.c emulate_Branch.h
	$(CC) $(CFLAGS) emulate_Branch.c -c -o emulate_Branch.o

emulate_DP.o : emulate_DP.c emulate_DP.h
	$(CC) $(CFLAGS) emulate_DP.c -c -o emulate_DP.o

emulate_Error.o : emulate_Error.c emulate_Error.h
	$(CC) $(CFLAGS) emulate_Error.c -c -o emulate_Error.o

emulate_Mul.o : emulate_Mul.c emulate_Mul.h
	$(CC) $(CFLAGS) emulate_Mul.c -c -o emulate_Mul.o

emulate_SDT.o : emulate_SDT.c emulate_SDT.h
	$(CC) $(CFLAGS) emulate_SDT.c -c -o emulate_SDT.o

clean:
	rm -f $(wildcard *.o)
	rm -f assemble
	rm -f emulate
