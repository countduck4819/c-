#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void nhap(int &n){
	cout<<"Nhap vao n: ";cin>>n;
}
void nhap1(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"n["<<i<<"] =";cin>>a[i];
	}
}
void xetmang(int a[],int n,int b[]){
	int tong = 0 ;
	int vitri =0 ;
	for (int i=1;i<=n;i++){
		for (int j=0;j<=n-i;j++){
			for (int k=j;k<j+i;k++){
				tong+=a[k];
			}
			cout<<endl<<tong<<" ";
			b[vitri]=tong;
			vitri++;
			tong =0;
		}
	}
}
int main(){
	int n;
	nhap(n);
	int a[n];
	int b[100]={0};
	nhap1(a,n);
	xetmang(a,n,b);
	int maxx = -10e-1;
	for(int i:b){
		if(maxx<i){
			maxx = i;
		}
	}
	cout<<"Tong cua mang do la"<<maxx;
}


