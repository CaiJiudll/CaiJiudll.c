#include<stdio.h>
int main(void) {
	int x = 100;
	printf("dec=%d , oct=%o ,hex=%x\a", x, x, x);
	printf("dec=%d , oct=%#o ,hex=%#x\n", x, x, x);
	return 0;
}
//二进制	BIN		
//八进制	OCT		%o
//十进制	DEC		%d
//十六进制	HEX		%x