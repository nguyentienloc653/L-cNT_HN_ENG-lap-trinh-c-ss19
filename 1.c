#include<stdio.h>
struct SinhVien{
	int id;
	char fullName[50];
	int age;
	char phoneNumber[20];
};
void inDanhSach(struct SinhVien sinhVien[], int n);
void xoaSinhVien(struct SinhVien sinhVien[], int *n, int id);
int main(){
	int n=5;
	int xoaStudent;
	struct SinhVien sinhVien[5]={
		{01, "Bang Trong Tu", 19, "0925482619"},
		{02, "Nguyen thac hung", 19, "0879158353"},
		{03, "chuc kim minh", 19, "0619368201"},
		{04, "Nguyen tien loc", 19, "0999999999"},
		{05, "Ngo xuan hoang", 19, "0819267891"}
	};
	inDanhSach(sinhVien, n);
	printf("\nBan hay nhap id can xoa: ");
	scanf("%d", &xoaStudent);
	xoaSinhVien(sinhVien, &n, xoaStudent);
	inDanhSach(sinhVien, n);
}
//
//
void inDanhSach(struct SinhVien sinhVien[], int n){
	printf("Danh sach sinh vien:\n");
	for(int i=0; i<n; i++){
		printf("\nId: %d\nHo va ten: %s\nTuoi: %d\nSo dien thoai: %s\n", sinhVien[i].id, sinhVien[i].fullName, sinhVien[i].age, sinhVien[i].phoneNumber);
	}
}
void xoaSinhVien(struct SinhVien sinhVien[], int *n, int id){
	int count=0;
	for(int i=0; i<*n; i++){
		if(sinhVien[i].id==id){
			count=1;
			for(int j=i; j<*n-1; j++){
				sinhVien[i]=sinhVien[j+1];
			}
			(*n)--;
		}
	}
	if(!count){
		printf("Id sinh vien can xoa khong ton tai\n");
	}
}
