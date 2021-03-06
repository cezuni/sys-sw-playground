#include <stdio.h>
#include <stdlib.h>

static void
print_line_number(const char *input_path)
{
	FILE *fp; 



	printf("Hi\n");
	printf("There\n");

	fp = fopen(input_path, "r");
	if (fp != NULL) {
		char	buf[1024];
		int	lineno = 1;
		while(fgets(buf, 1024, fp)) {
			printf("%u: %s", lineno, buf);
			lineno++;
		}
		fclose(fp);
	}
	else{
		printf("Cannt open file!\n");
		exit(1);
	}
}

int
main(int argc, char *argv[])
{
	if (argc < 1) {
		printf("Usage: lineno <input file>\n");
                return 1;
	}


	printf("Eunbyeol Kim\n");

	print_line_number(argv[1]);
	return 0;
}
