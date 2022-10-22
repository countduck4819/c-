#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;
void nhap(int &n){
	cout<<"Nhap vao so so hang"<<endl;cin>>n;
}
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";cin>>a[i];
	}
}
void xoadl(int a[],int &n,int k){
	for(int i=k;i<n;i++){
		a[i-1]=a[i];
	}
	n--;
}
void chendl(int a[],int &n,int k,int x){
	for (int i = n-1;i>=k-1;i--){
		a[i+1] = a[i];
	}
	a[k-1] = x;
	n+=1;
}
void chen(int a[],int &n){
	int k;
	cout<<"Nhap vi tri chen k :";cin>>k;
	if (k>=1 && k<=n){
		int x;
		cout<<"Nhap so can chen x:";cin>>x;
		chendl(a,n,k,x);
		cout<<"Mang vua chen :";
		for (int i=0;i<n;i++){
			cout<<a[i];
		}
	}
	else{
		cout<<"Vi tri chen ko hop le"<<endl;
	}
}
int main(){
	int n;
	nhap(n);
	int a[20];
	nhapmang(a,n);
	int k;
//	cout<<"Nhap vi tri xoa k:";cin>>k;
//	if (k>=1 && k<=n){
//		xoadl(a,n,k);
//		cout<<"**************************";
//		for (int i=0;i<n;i++){
//			cout<<a[i];
//		}
//		cout<<endl<<"*************";
//		for (int i:a){
//			cout<<i;
//		}
//	}
//	else{
//		cout<<"Vi tri xoa ko hop le";
//	}
	chen(a,n);
	return 0;
	
}
