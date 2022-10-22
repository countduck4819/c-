#include<iostream>
#include<iomanip>
#include<math.h>
#include<ctype.h>
using namespace std;
double nhap(double &a,double &b,double &c){
	cout<<"Nhap vao so a : "<<endl;cin>>a;
	cout<<"Nhap vao so b : "<<endl;cin>>b;
	cout<<"Nhap vao so c : "<<endl;cin>>c;
}
void hien_thi(double a,double b,double c){
	if(a==0){
		cout<<"Day ko phai la phuong trinh bac 2"<<endl;
	}
	else{
		double denta = pow(b,2)-4*a*c;
		if (denta<0) cout<<"Phuong trinh vo nghiem";
		else{
			if (denta==0){
				cout<<fixed<<"Phuong trinh co ngiem kep x1=x2="<<setprecision(2)<<(-(double)b/(2*a));
			}
			else{
				cout<<"Phuong trinh co 2 nghiem phan biet : "<<endl;
				cout<<fixed<<"X1 = "<<setprecision(2)<<((-b-sqrt(denta))/(2*a))<<endl;
				cout<<fixed<<"X2 = "<<setprecision(2)<<((-b+sqrt(denta))/(2*a))<<endl;
			}
		}
	}
}
int main(){
	double a,b,c;
	nhap(a,b,c);
	hien_thi(a,b,c);
	return 0;
}
