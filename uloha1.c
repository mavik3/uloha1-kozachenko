#include <stdio.h>

unsigned int nasobky_v_rozsahu(unsigned int m, int a, int b)
{
	if(a==0 || b==0 || m==0)
        return 0;

	return( b / m - ( a - 1 ) / m);	
}

int main(void)
{
	int a, b;
	unsigned int m;
	
	scanf("%d %d %d",&m,&a,&b);
	printf("kolko nasobkov kratnych %d na intervale [%d,%d]: %u ", m, a, b, nasobky_v_rozsahu(m,a,b));

	return 0;
}
