#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void nhap(int &n){
	cin>>n;
}
void nhapmang(int a[],int n){
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
}
//void xoa_dl(int a[],int&n,int k){
//	for (int i=k;i<n;i++){
//		a[i-1] = a[i];
//	}
//	n--;
//}
//void xoa_dl(int a[],int&n,int k){
//	for (int i=k;i<n-1;i++){
//		a[i] = a[i+1];
//	}
//	n--;
//}
void hien_thi_mang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
void chen_dl(int a[],int &n,int k,int x){
	for (int i=n;i>k-1;i--){
			a[i]=a[i-1];
	}
	n++;
	a[k-1] = x;
}
int main(){
	int n,k;
	nhap(n);
	int a[100];
	nhapmang(a,n);
	cin>>k;
	int x;
	cin>>x;
//	if (k>=1&&k<=n){
//		xoa_dl(a,n,k);
//		hien_thi_mang(a,n);
//	}
//	else{
//		cout<<"Khong hop le ";
//	}
	if (k>=1&&k<=n){
		chen_dl(a,n,k,x);
		hien_thi_mang(a,n);
	}
	return 0;
}


