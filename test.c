#include <stdio.h>

static void  
print_line_number(const char *input_path)  
{  
	for (int i = 0; i < 110; ++i) {
        printf("%3d --> \033[%dm%s\033[0m\n", i, i, "Text");
	printf("Hello Systemsoftware");
	printf("Plsease~");
	printf("=========\nHello World! I'm DongHee\n==========");
	printf("Nice to meet you, I'm Hyemin");    
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
	printf("Hello ");  
	return 0;  
}  

