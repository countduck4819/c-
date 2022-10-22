#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void nhap(int &a,int &b){
	cout<<"Nhap vao so nguyen a : "<<endl;cin>>a;
	cout<<"Nhap vao so nguyen b : "<<endl;cin>>b;
}
void tinh(int a,int b,int &c,int &d,long long &e,double &g,int &h){
	c = a+b;
	d = a-b;
	e = 1ll*a*b;
	g = (double) a/b;
	h = a%b;
}
int main(){
	int a,b,tong,hieu,dongdu;
	long long tich;
	double thuong;
	nhap(a,b);
	tinh(a,b,tong,hieu,tich,thuong,dongdu);
	cout<<setw(18)<<left<<"Tong cua 2 so la : "<<setw(5)<<right<<tong<<endl;
	cout<<setw(18)<<left<<"Hieu cua 2 so la : "<<setw(5)<<right<<hieu<<endl;
	cout<<setw(18)<<left<<"Tich cua 2 so la : "<<setw(5)<<right<<tich<<endl;
	cout<<setw(18)<<fixed<<left<<"Thuong cua 2 so la : "<<setw(5)<<right<<setprecision(2)<<thuong<<endl;
	cout<<setw(18)<<left<<"Dong du cua 2 so la : "<<setw(5)<<right<<dongdu<<endl;
}
