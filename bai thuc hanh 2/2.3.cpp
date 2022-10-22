#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void nhap(int &n,double &x){
	cout<<"Nhap vao so nguyen n : "<<endl;cin>>n;
	cout<<"Nhap vao so nguyen x : "<<endl;cin>>x;
}
double tong(int n,double x){
	double tong = 0;
	if (n%2!=0){
		return tong;
	}
	else{
		tong = 2016*x;
		double tich=x;
		for(int i=2;i<=n;i++)
			tich = tich*(x/3);
			tong+=tich;
	}
	return tong;
}
int main(){
	int n;
	double x;
	nhap(n,x);
	cout<<"Tong la : "<<tong(n,x)<<endl;
}
