#include<bits/stdc++.h>
using namespace std;
void nhap(double &x,int &n){
	cout<<"Nhap vao so thuc x : "<<endl;cin>>x;
	cout<<"Nhap vao so nguyen duong : "<<endl;cin>>n;
}
double tinhS(double x,int n){
	double S=0;
	double a = pow(n,2)*pow(x,2);
	double cancana = fabs(sqrt(x*n));
	cout<<cancana;
	if((n>=2)&&(x!=0)){
		for(int i=2;i<=n;i++){
			S=(float)S + (float)cancana/i;
		}
		return S;
	}
	else{
		S=a;
		return S;
	}
}
int main(){
	int n;
	double x;
	nhap(x,n);
	int S = tinhS(x,n);
	cout<<fixed<<setprecision(2)<<endl<<S;
	return 0;
}
