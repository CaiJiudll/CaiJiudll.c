#include<stdio.h>
int main(void) {
	int x = 100;
	printf("dec=%d , oct=%o ,hex=%x\a", x, x, x);
	printf("dec=%d , oct=%#o ,hex=%#x\n", x, x, x);
	return 0;
}
//������	BIN		
//�˽���	OCT		%o
//ʮ����	DEC		%d
//ʮ������	HEX		%x