#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	/* 
	nhap x, n
	*/
	int x,n,tu,mau =1,i=0;
	float sum=1;
	printf("nhap x = ");
	scanf("%d", &x);
	printf("nhap n = ");
	scanf("%d", &n);
	while(i<=n){
		tu=pow(x, 2*i);
		mau= mau*(2*i)*(2*i);
		sum=sum + (float)tu/mau;
		i++;
	}
	printf("in ra man hinh s = %f", sum);	
}
