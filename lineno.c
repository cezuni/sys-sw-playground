#include <stdio.h>

static void
print_line_number(const char *input_path)
{
	/* TODO */
}

int
main(int argc, char *argv[])
{
	if (argc < 1) {
		printf("Usage: lineno <input file>\n");
		return 1;
	}
	print_line_number(argv[1]);
	return 0;
}
