
all: Output_static Output_dynamic

Output_static: matrix_static.c tandc.c test_static.c matrix_static.h
	gcc $^ -D SYSTEM_2 -o Output_static

Output_dynamic: matrix_dynamic.c tandc.c test_dynamic.c matrix_dynamic.h
	gcc $^ -D SYSTEM_1 -o Output_dynamic

clean:
	-rm Output_static
	-rm Output_dynamic
