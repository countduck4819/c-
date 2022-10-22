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
void sapxep(int a[],int n){
	int cd;
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]>a[j]){
				cd = a[i];
				a[i] = a[j];
				a[j] = cd;
			}
		}
	}
}
int main(){
	int n;
	nhap(n);
	int a[n];
	nhapmang(a,n);
	sapxep(a,n);
	for(int i:a){
		cout<<i<<" ";
	}
	return 0;
}
