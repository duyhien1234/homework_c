#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	/* 
	nhap  n
	*/
	int n,tu=1,mau =0,i=1;
	float sum=0;
	printf("nhap n = ");
	scanf("%d", &n);
	while(i<=n){
		mau= mau+i;
		sum=sum + (float)tu/mau;
		i++;
	}
	printf("in ra man hinh s = %f", sum);	
}
