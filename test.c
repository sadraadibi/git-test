#include <stdio.h>

int main() 
{
	int x1,x2,x3,x4,x5,x6,v1,v2,v3,t;
	scanf("%d\n",&t);

	while (t) {
	scanf("%d",&x1);
	if (x1==1){
				printf("Jab\n");
	}
	if (x1==2){
				printf("Straight Right\n");
	}
	if (x1==3){
				printf("Hook\n");
	}
	if (x1==4){
				printf("Upper Cut\n");
	}
	--t;
}
	return 0;
	
	
}

