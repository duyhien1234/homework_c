#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void main(){
	//Nhap tu ban phim ten, tuoi, nam sinh -> in ra man hinh
	//clrscr(); //lam sach man hinh
	system("cls"); //Lam sach man hinh
	// Khai bao cac bien
	char name[30]; //vi khong biet ten nhap vao dài bao nhieu nen khai bao do dai 30 là khoang hop ly
	int age, year;
	printf("Nhap ten cua ban = ");
	gets(name); //gan gia tri vao cho bien name
	printf("Nhap tuoi cua ban = ");
	scanf("%d", &age); //"%d": lay gia tri kieu int
	printf("Nhap nam sinh cua ban = ");
	scanf("%d", &year);
	
	//In ra man hinh
	printf("Thong tin cua ban la:\n");
	printf("Ten: %s, tuoi: %d, nam sinh: %d", name, age, year);
	getch();
	
	
}
