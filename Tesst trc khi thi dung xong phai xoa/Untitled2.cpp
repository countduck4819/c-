#include<iostream>
#include<iomanip>
#include<math.h>
#include<fstream>
using namespace std;
void nhapn(int &n){
	cout<<"Nhap vao n : "<<endl;
	cin>>n;
}
void nhapmang(int *&a,int n){
	cout<<"Nhap vao mang A : "<<endl;
	for (int i=0;i<n;i++){
		cout<<"A["<<i<<"]= ";cin>>*(a+i);
		cout<<endl;
	}
}
void hienthimang(int *a,int n){
	cout<<"Hien thi mang la : "<<endl;
	for (int i=0;i<n;i++){
		cout<<"A["<<i<<"]="<<*(a+i)<<endl;
	}
}
void xuatmang1(int *a,int n){
	ofstream f;
	f.open("ABC2007.TXT",ios::out);
	for(int i=0;i<n;i++){
		f<<*(a+i)<<" ";
	}
	cout<<endl;
	f.close();
	hienthimang(a,n);
	cout<<endl;
}
void xuatmang2(int *&a,int n){
	int tt;
	ofstream f;
	f.open("XYZ2007.TXT");
	for (int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tt=a[i];
				a[i]=a[j];
				a[j]=tt;
			}
		}
	}
	for (int i=0;i<n;i++){
		f<<*(a+i)<<" ";
	}
	cout<<endl;
	f.close();
	hienthimang(a,n);
	cout<<endl;
}
void tachmang(int *a,int n){
	int dem=0;
	int so=0;
	for (int i=0;i<n;i++){
		if(a[i]%2==0){
			dem++;
		}
	}
	cout<<dem<<endl;
	int *b = new int[dem];
	int *c = new int[n-dem];
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			b[so]=a[i];
			so++;
		}
	}
	hienthimang(b,so);
	so=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			c[so]=a[i];
			so++;
		}
	}
	hienthimang(c,so);	
}
int kiemtra(int *a,int n){
	int tong=0;
	for (int i=0;i<n;i++){
		tong+=a[i];
		if(a[i]%2!=0){
			cout<<"Mang A ko hop le"<<endl;
			return 0;
		}
	}
	if (tong>0){
		cout<<"Mang A hop le"<<endl;
	}
	return 0;
}
int main(){
	int n;
	nhapn(n);
	int *a =new int [n];
	nhapmang(a,n);
	xuatmang1(a,n);
	xuatmang2(a,n);
	tachmang(a,n);
	kiemtra(a,n);
	return 0;
}
