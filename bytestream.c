#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int spow(int e,int k){
	if (k == 0) return 1;
	int r = e;
	for (int i = 1; i < k; i++){
		r = r*e;
	}
	return r;
}

int main(int argc, char *argv[]){
	for (int i = 1; i < argc; i++){
		int sz = 0;
		int len = strlen(argv[i]);
		for (int j = 0; argv[i][j]!='\0'; j++){
			sz += (argv[i][j]-48)*spow(10,(len-j-1));
		}
		printf("%c",(unsigned char) sz);
	}
	return 0;
}
