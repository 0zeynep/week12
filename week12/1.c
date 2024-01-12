#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char A[60];
	int i,word=0, counter=0;
	printf("Enter a string");
	gets(A);
	for (i=0;A[i]!='\0';i++){
		if(A[i]=='a'){
			counter++;
		}
		
				
			}
			
		
	
		word++;
		printf("%d. kelimede %d adet a harfi var\n",word,counter);
	return 0;
}
