#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void nhap(int &n){
	cout<<"Nhap vao so kwh dien tieu thu trong thang : "<<endl;cin>>n;
}
void hienthi(int n,int &tong){
	if (n<=100){
		tong = 750*n;
	}
	else if (n>=101 && n<=200){
		tong = 75000+(n-100)*1250;
	}
	else if (n>=201 && n<=300){
		tong = 75000 + 125000 + (n-200)*1750;
	}
	else if (n>=301){
		tong = 75000 + 125000 + 175000 + 3000*(n-300);
	}
}
int main(){
	int n,tong = 0;
	nhap(n);
	hienthi(n,tong);
	cout<<"Tong tien dien can tra la : "<<endl<<tong;
	return 0;
}
