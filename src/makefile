IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm -g -ftest-coverage -fprofile-arcs

_DEPS = pilha.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = pilhafunc.o testa_pilha.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pilha.out: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
