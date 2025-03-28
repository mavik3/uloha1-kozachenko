#include <stdio.h>
	unsigned int nasobky_v_rozsahu(unsigned int m, int a,b){
		
	return (b/m-(a-1)/m);
	
	}
	
	int main (){
	int a,b;
	unsigned int m;
	
	scanf("%d",&m);
	printf("kolko nasobkov kratnych %d na intervale [%d,%d]: %d ",m,a,b,nasobky_v_rozsahu(m,a,b));
			}
	
	