#include <stdio.h>
#include <stdlib.h>

static void
print_line_number(const char *input_path)
{
	FILE *fp; 
	
	fp = fopen(input_path, "r");
	if (fp != NULL){
		char	buf[1024];
		int	lineno = 1;
		while(fgets(buf, 1024, fp)) {
			printf("%u: %s", lineno, buf);
			printf("GoGo");
			lineno++;
		}
		fclose(fp);
	}
       else{
                printf("Cannot open file!");
                exit(1);
       }
}

int
main(int argc, char *argv[])
{
	
	printf("Let's get it started~!");
	if (argc < 1) {
		printf("Usage: lineno <input file>\n");
		return 1;
	}
	print_line_number(argv[1]);
	printf("DONE!");
	return 0;
}
