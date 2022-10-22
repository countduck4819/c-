#include<iostream>
#include<iomanip>
#include<math.h>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
struct sv{
	string ma,ten,lop,ns;
	double gpa;
	in(){
		cout<<"Ma sinh vien :"<<ma<<endl;
		cout<<"Ten sinh vien :"<<ten<<endl;
		cout<<"Lop :"<<lop<<endl;
		cout<<"Ngay sinh :"<<ns<<endl;
		cout<<"GPA :"<<fixed<<setprecision(2)<<gpa<<endl;
	}
	void nhap(){
		cout<<"Nhap ma sinh vien : ";cin>>ma;
		cout<<"Nhap ten sinh vien : ";
		cin.ignore();
		getline(cin,ten);
		cout<<"Nhap lop :";cin>>lop;
		cout<"nhap ngay sinh : ";cin>>ns;
		cout<<"Gpa :";cin>>gpa;
	}
};
void inds(sv a[],int n){
	cout<<"Thong tin danh sach si"
}
int main(){
	
}
