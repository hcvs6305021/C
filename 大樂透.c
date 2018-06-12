#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,m[6],i;
	printf("輸入的數:");
	scanf("%d",&a);
	for(i=0;i<6;i++)
	m[i]=rand()%49+1;
	for(i=0;i<6;i++)
	printf("隨機的數:m[%d]=%d\n",i,m[i]);
	return 0;
}
