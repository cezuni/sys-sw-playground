#include <stdio.h>

static void  
print_line_number(const char *input_path)  
{  
	for (int i = 0; i < 110; ++i) {
        printf("%3d --> \033[%dm%s\033[0m\n", i, i, "Text");
	printf("Plsease~");
    }
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

