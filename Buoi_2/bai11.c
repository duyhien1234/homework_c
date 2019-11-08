#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	/*
	nhap n va tinh s
	*/
	int i, n;
	float sum = 1;
	printf("nhap n");
	scanf("%d", &n);
	i=1;
	while(i<=n){
		sum=sum * i;
		i++;
	}
	printf("in ra man hinh S = %f", sum);
	
	
	
	
	
}
