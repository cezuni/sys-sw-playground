#include <stdio.h>

static void
print_line_number(const char *input_path)
{
	FILE *fp; 
	
	fp = fopen(input_path, "r");
	if (fp != NULL){
		int lineno = 1;
		pritnf("%u" , lineno);
	}
	fclose(fp);
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
