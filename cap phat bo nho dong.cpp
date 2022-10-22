#include <iostream>
#include<iomanip>
#include<math.h>
#include<malloc.h>
using namespace std;
void nhap_n(int &n){
	do{
		cout<<"Nhap n trong doan (5,30) :";
		cin>>n;
	} while (n<5||n>30);
}
void nhap_mang(int *a,int n){
	cout<<"Nhap mang"<<n<<"So nguyen"<<endl;
	for (int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void hien_thi_mang(int *a,int n){
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void chen(int *&a,int &n,int k,int x){
	a= (int*) realloc(a,(n+1)*sizeof(int));
	for(int i=n;i>=k;i--){
		a[i] = a[i-1];
	}
	a[k-1] = x;
	n++;
}
void quan_li_chen(int *&a,int &n){
	int x,k;
	do{
		cout<<"Nhap so nguyen k(1<=k<="<<n<<"):";
		cin>>k;
	}while (k<1||k>n);
	cout<<"Nhap so nguyen x:";cin>>x;
	chen(a,n,k,x);
	hien_thi_mang(a,n);
}
void sap(int *a,int n){
	for (int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if (a[i]>a[j]){
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
int main(){
	int *a,n;
	nhap_n(n);
	a = new int[n];
	nhap_mang(a,n);
	cout<<"Mang sau khi nhap : ";
	hien_thi_mang(a,n);
}
