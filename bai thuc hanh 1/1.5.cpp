#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void nhap(double &a,double &b,int c,string d){
	cout<<"Nhap vao x "<<c<<" cua diem "<<d<<" la : "<<endl;cin>>a;
	cout<<"Nhap vao y "<<c<<" cua diem "<<d<<" la : "<<endl;cin>>b;
}
void K(double a,double b,double c,double d,double e,double g,double &x,double &y){
	x = (a+c+e)/3;
	y = (b+d+g)/3;
}
double kc(double a,double b,double c,double d,double e,double g,double x,double y){
	double Inter;
	Inter = sqrt(pow(a-x,2)+pow(b-y,2))+sqrt(pow(c-x,2)+pow(d-y,2))+sqrt(pow(e-x,2)+pow(g-y,2));
	return Inter;
}
int main(){
	double x,x1,x2,x3,y,y1,y2,y3;
	nhap(x1,y1,1,"A");
	nhap(x2,y2,2,"B");
	nhap(x3,y3,3,"C");
	K(x1,y1,x2,y2,x3,y3,x,y);
	double ddkc = kc(x1,y1,x2,y2,x3,y3,x,y);
	cout<<"toa do x cua K la : "<<x<<endl;
	cout<<"toa do y cua K la : "<<y<<endl;
	cout<<"Khoang cach Inter la : "<<ddkc<<endl;
	return 0;
}

