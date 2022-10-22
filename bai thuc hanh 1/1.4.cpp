#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void nhap(double &a,double &b,string c,string d){
	cout<<"Nhap vao "<<c<<endl;cin>>a;
	cout<<"Nhap vao "<<d<<endl;cin>>b;
}
void tinh(double a,double b,double c,double d,double &D,double &M,double &C){
	D = sqrt(pow(b-a,2)+pow(d-c,2));
	M = fabs(b-a)+fabs(d-c);
	C = 1 - (double)(a*b+c*d)/(sqrt(pow(a,2)+pow(c,2))+sqrt(pow(b,2)+pow(d,2)));
}
int main(){
	double x1,x2,y1,y2,D,M,C;
	nhap(x1,y1,"x1 cua diem A : ","y1 cua diem A : ");
	nhap(x2,y2,"x2 cua diem B : ","y2 cua diem B : ");
	tinh(x1,x2,y1,y2,D,M,C);
	cout<<fixed<<"Khoang cach Euclidean giua A va B : "<<setprecision(3)<<D<<endl;
	cout<<fixed<<"Khoang cach Manhattan giua A va B : "<<setprecision(3)<<M<<endl;
	cout<<fixed<<"Khoang cach Cosin giua A va B : "<<setprecision(3)<<C<<endl;
	return 0;
}
