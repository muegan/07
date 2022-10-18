#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	printf("함수 호출 전 i=%d\n",i);
	inc(i);
	printf("함수 호출 후 i=%d\n",i);
}
int inc(int counter)
{
	counter++;
	return counter;
}
