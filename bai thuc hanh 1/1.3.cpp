#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void nhap(double &a){
	cout<<"Nhap vao so x : "<<endl;cin>>a;
}
double tinh(double x){
	double f;
	f = (pow(x,2)+exp(fabs(x))+pow(sin(x),2))/(pow(pow(x,2)+1,(double)1/5));
	return f;
}
int main(){
	double x;
	nhap(x);
	cout<<fixed<<"Ket qua cua phep tinh la : "<<setprecision(2)<<tinh(x)<<endl;
	return 0;
}
