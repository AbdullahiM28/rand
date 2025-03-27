#include <stdarg.h>
#include <stdio.h>

void print_nums(int count, ...) {
	va_list args;
	va_start(args, count);
	vfprintf(stdout, "Num %d: %d, %d\n", args);
	va_end(args);
}

int main() {
	printf("Hello AMJ!\n");
	print_nums(3, 10, 20, 30);

	return 0;
}
