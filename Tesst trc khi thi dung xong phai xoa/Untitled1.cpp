#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void nhap(double &a,int &b,int &c){
	cout<<"Nhap vao 1 so thuc : "<<endl;cin>>a;
	cout<<"Nhap vao 1 so nguyen : "<<endl;cin>>b;
	cout<<"Nhap vao 1 so nguyen : "<<endl;cin>>c;
}
double tinhH(int a,int b){
	double H=0;
	if ((a+(double)1/b)>=0){
		H=sqrt(a+(double)1/b);
	}
	return H;
}
double tinhT(double a,int b){
	double T=0;
	if (b>0){
		T = 100*exp(b+2);
		for(int i=1;i<=b;i++){
			T+=pow(a,i)/(double)(2*i-1);
		}
		return T;
	}
	return 0;
}
int main(){
	double x;
	int m,n;
	nhap(x,n,m);
	cout<<"H = "<<tinhH(2*m,3*n)<<endl;
	cout<<"T = "<<tinhT(x,n+m);
	return 0;
}
