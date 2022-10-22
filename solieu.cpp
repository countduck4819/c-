#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef struct{
	char ho_ten[20];
	int tuoi;
	char gioi_tinh[6];
	double diem_kt;
} SinhVien;
int main(){
	SinhVien sv = {"Nguyen Hoa Mi",20,"Nu",7.5};
	strcpy(sv.ho_ten,"fklsfkla");
	sv.tuoi = 2342 ; // co cach de thay doi bien
	cout<<sv.ho_ten<<endl;
	cout<<sv.tuoi<<endl;
	cout<<sv.gioi_tinh<<endl;
	cout<<sv.diem_kt<<endl;
}
