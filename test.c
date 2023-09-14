#include <stdarg.h>
#include <stdio.h>

int sum(int count, ...){
	int sum = 0, i, x;
	va_list args;
	va_start(args, count);

	for (i = 0; i < count; i++){
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return sum;
}

int main(){
	printf("Sum is : %d \n", sum(4,1,2,3,4));
}
