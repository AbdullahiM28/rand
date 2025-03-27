#include <stdarg.h>
#include <stdio.h>

// VARIABLE Length arrays / variadic functions 101

void print_nums(int count, ...) {
	va_list args; // a sort of list that deals with the "..." parameter
	va_start(args, count);
	vfprintf(stdout, "Num %d: %d, %d\n", args); // printf "under the hood"
	va_end(args); // cleanup
}

int main() {
	printf("Hello AMJ!\n");
	print_nums(3, 10, 20, 30);

	return 0;
}
