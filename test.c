#include <stdio.h>

int function(void)
{
	int a = 1;
	printf("hello!\n");
	a += 10;
	return 10;
}

int main(void)
{
	function();
	return 0;
}
