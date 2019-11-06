#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	/*
	nhap n va tinh s
	*/
	int i, n;
	float S = 0;
	printf("nhap n");
	scanf("%d", &n);
	i=1;
	while(i<=n){
		S=S * i;
		i++;
	}
	printf("in ra man hinh S = %f", S);
	
	
	
}
