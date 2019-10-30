#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *f = fopen(argv[0][0], "r");

	if(strcmp("f", argv[]) == 0 ){
		int i = 0;
		int c;
		while(c= fgetc(f) != 0){
			i++;		
		}
		printf("%c\n", i);
	}
}
