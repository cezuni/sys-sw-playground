#include <stdio.h>
#include <stdlib.h>

static void
print_line_number(const char *input_path)
{
	printf("this is lineno.c\n");
	FILE *fp; 

	fp = fopen(input_path, "r");
	if (fp != NULL) {
		char	buf[1024];
		int	lineno = 1;
		while(fgets(buf, 1024, fp)) {
printf("lineno와 buf");			
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
		printf("Usag: lineno <input file>\n");
		printf("Usag : lineno 입력파일");
                return 1;
	}
<<<<<<< 469d509889d9940faf37ecfcf0a58bece2916ee1
=======
	printf("Jooyoung Cha\n");
>>>>>>> lineno.c is modified
	print_line_number(argv[1]);
	return 0;

}
