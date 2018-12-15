#include <stdio.h>
#include <stdlib.h>

static void // 1773139 장다솜
print_line_number(const char *input_path)
{
	FILE *fp; 
	
	fp = fopen(input_path, "r"); //파일 입출력
	if (fp != NULL){ //파일의 끝까지 읽어서 
		char	buf[1024];
		int	lineno = 1;
		while(fgets(buf, 1024, fp)) {
			printf("%u: %s", lineno, buf);
			lineno++; //줄 번호 출력
		}
		fclose(fp);
	}
       else{ //파일을 열 수 없음
                printf("Cannt open file!\n");
                exit(1);
       }
}

int
main(int argc, char *argv[])
{
	if (argc < 1) {
		printf("Usag: lineno <input file>\n");
		return 1;
	}
        printf("This is a program printing line of the read file\n");
	print_line_number(argv[1]);
        
	return 0;
}
