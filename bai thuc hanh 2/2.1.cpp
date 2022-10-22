#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
using namespace std;
void nhap(int &a){
	cout<<"Nhap vao so tien phai tra cua khach hang la : "<<endl;cin>>a;
}
int xuli(int a){
	if (a>0){
		if (a>=200 && a<300 ){
			a = a*0.8;
		}
		else if (a>=300){
			a*=0.7;
		}
		return a;
	}
	else{
		if (a<=0){
			return 0;
		}
	}
}
int main(){
	int a;
	nhap(a);
	if (xuli(a)!=0){
		cout<<setw(3)<<left<<xuli(a);
	}
	else{
		cout<<"Khong hop le";
	}
}
