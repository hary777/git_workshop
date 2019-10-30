#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(int argc, char **argv){
	FILE *f = fopen(argv[1],"r");

	if(argc==3){
		return 1;
	}

	if(strcmp("-c", argv[1]) == 0 || strcmp("-w", argv[1]) == 0 || strcmp("-l", argv[1]) == 0 || strcmp("-s", argv[1]) == 0){
		int c,i=0;
		while((c = fgetc(f)) != EOF){
			if(strcmp("-w", argv[1]) == 0 &&  isspace(c)){
					i++;
			}
			else if(strcmp("-c", argv[1]) == 0){
				i++;
			}
			else if(strcmp("-l", argv[1]) == 0){
				i++;
			}
			else if(strcmp("-s", argv[1]) == 0 && c == '/'){
				i++;
			}
		}
		printf("%d\n", i);
	}
	return 0;

}
