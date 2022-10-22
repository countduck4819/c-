#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int nhap(){
	int n;
	cout<<"Nhap vao so nguyen n : "<<endl;cin>>n;
	return n;
}
long long GT(int a){
	long long tich = 1;
	for(int i=1;i<=a;i++){
		tich *=i;
	}
	return tich*1ll;
}
int main(){
	int n;
	double S;
	n = nhap();
	S = ((double)(GT(n)+1)/GT(n+1));
	cout<<fixed<<"Ket qua cua bieu thuc do la : "<<endl<<setprecision(3)<<S;
	return 0;
}

