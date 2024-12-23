#include<stdio.h>
#include<string.h>
struct SinhVien{
	int id;
	char fullName[50];
	int age;
	char phoneNumber[20];
};
void arrangeSinhVien(struct SinhVien sinhVien[], int n);
void inDanhSach(struct SinhVien sinhVien[], int n);
int main(){
	int n=5;
	struct SinhVien sinhVien[5]={
		{01, "Bang Trong Tu", 19, "0925482619"},
		{02, "Nguyen thac hung", 19, "0879158353"},
		{03, "chuc kim minh", 19, "0619368201"},
		{04, "Nguyen tien loc", 20, "0999999999"},
		{05, "Ngo xuan hoang", 19, "0819267891"}
	};
	printf("Danh sach ban dau:\n");
	inDanhSach(sinhVien, n);
	arrangeSinhVien(sinhVien, n);
	printf("\nDanh sach sau khi sap xep:\n");
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
//
void arrangeSinhVien(struct SinhVien sinhVien[], int n){
	struct SinhVien temp;
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(sinhVien[i].fullName, sinhVien[j].fullName)>0){
				temp=sinhVien[i];
				sinhVien[i]=sinhVien[j];
				sinhVien[j]=temp;
			}
		}
	}
}

