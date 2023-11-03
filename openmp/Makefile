CC 	= gcc-12
CFLAGS	= -O3 -fopenmp 
#CC	= icx
#CFLAGS	= -O3 -qopenmp
LDFLAGS	= -lm -lgomp

all:	openmp_parallel_region openmp_reduction openmp_max_threads \
	openmp_tasks openmp_depend openmp_datasharing openmp_if openmp_taskgroups openmp_simd \
	openmp_schedule openmp_master openmp_single \
	exercise1 exercise1_solution exercise2 exercise2_solution exercise3 exercise3_solution 

openmp_parallel_region:	openmp_parallel_region.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

openmp_reduction:	openmp_reduction.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

openmp_max_threads:	openmp_max_threads.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

openmp_datasharing: openmp_datasharing.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

openmp_schedule:	openmp_schedule.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

openmp_single:	openmp_single.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

openmp_master:	openmp_master.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

openmp_tasks:	openmp_tasks.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)
openmp_depend:	openmp_depend.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

openmp_if:	openmp_if.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

openmp_taskgroups:	openmp_taskgroups.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)	

openmp_simd: openmp_simd.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)	
	
exercise1:	exercise1.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

exercise1_solution:	exercise1_solution.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

exercise2:	exercise3.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

exercise2_solution:	exercise3_solution.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

exercise3:	exercise3.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

exercise3_solution:	exercise3_solution.c
	$(CC) $(CFLAGS) -o $@ $? $(LDFLAGS)

.SUFFIXES:	.o .c

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean:
	/bin/rm -f a.out *.o *~ ompexample[1-6]
	/bin/rm -f gpuexample[1-6]
	/bin/rm -f openmp_tasks openmp_depend openmp_datasharing openmp_if openmp_taskgroups openmp_parallel_region
	/bin/rm -f openmp_simd openmp_parallel_section openmp_max_threads openmp_reduction openmp_master openmp_schedule openmp_single 
	/bin/rm -f exercise1 exercise1_solution exercise2 exercise2_solution exercise3 exercise3_solution 
	/bin/rm -f *.csv

