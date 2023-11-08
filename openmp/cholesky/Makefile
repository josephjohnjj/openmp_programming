CC 	= gcc
CFLAGS	= -g -O3
LDFLAGS	= -lm -lpapi

all:	cholesky cholesky_solution

cholesky:	cholesky.o 
	$(CC) $(CFLAGS) -o $@ cholesky.o $(LDFLAGS)

cholesky:	cholesky_solution.o 
	$(CC) $(CFLAGS) -o $@ cholesky_solution.o $(LDFLAGS)
	
test_cholesky_solution:	cholesky_solution
	./cholesky_solution 200

test_cholesky:	cholesky
	./cholesky 200

.SUFFIXES:	.o .c

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean:
	/bin/rm -f a.out *.o *~ cholesky  *.s
	/bin/rm -f a.out *.o *~ cholesky_solution  *.s

