#include<stdio.h>
#include<string.h>
int main(){
	char t [20];
	int i, j;
	fflush(stdin);
	gets(t);

	int leng;
	leng = strlen(t);
	for (i= 0 ; i < leng; i++ ) {
		for (j + i +1; j < leng; j++) {
			if (t[i]>t[j]) {
				char tmp;
				tmp= t[i];
				t[i]=t[j];
				t[j]=tmp;
			}
		}
	}
printf("\n%s" , t);
}

