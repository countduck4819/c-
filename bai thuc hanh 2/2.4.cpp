#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int nhap(int &n){
	cout<<"Nhap vao so nguyen to n : "<<endl;cin>>n;
}
int kiemtra(int n){
	for(int i=2;i<n;i++){
		if (n%i==0){
			return 0;
		}
	}
	return n>1;
}
void songuyento(int n,int &tong,int &dem){
	for (int i=1;i<=n;i++){
		if (kiemtra(i)!=0){
			tong+=i;
			dem++;
		}
	}
}
int main(){
	int n,tong=0,dem=0;
	nhap(n);
	songuyento(n,tong,dem);
	cout<<"Tong cac so nguyen to la : "<<tong<<endl;
	cout<<"So cac so nguyen to do la : "<<dem<<endl;
	return 0;
}
