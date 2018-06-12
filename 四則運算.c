#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b;
	char c;
	printf("請輸入A值 B值 運算符號C:\n");
	scanf("%d %d %c",&a,&b,&c);
	printf("A值=%d B值=%d 運算符號%c\n",a,b,c);
	switch(c){
		case'+':{
			printf("a+b= %d",a+b);
			break;
		}
		case'-':{
			printf("a-b= %d",a-b);
			break;
	    }
		case'*':{
			printf("a*b= %d",a*b);
			break;
	    }
		case'/':{
			printf("a/b= %d",a/b);
			break;
		}
		default:
		printf("輸入錯誤請重新輸入\n");
		break;
	}
	
	return 0;
}
