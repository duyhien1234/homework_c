#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	/*
	bai 13 chuong 1
	cac phep toan deu co dang x mu (n), thuc hien n lan
	=> nhap x, n 
	=> dung vong lap for de tinh ket qua 
	*/
	int i, x, n;
	long sum = 0;
	printf("nhap so lan lap n = ");
	scanf("%d", &n);
		printf("nhap x = ");
	scanf("%d", &x);
	for (i = 1; i<= n; i++){
		sum +=(long)pow(x, (i));
	}
	printf("ket qua s = %ld", sum);
}
		
	
	 
	
	

	


