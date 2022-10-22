#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
void nhap(int &a){
	cout<<"Nhap vao 1 so nguyen co it hon 5 chu so"<<endl;cin>>a;
}
string chuyendoi(int a){
	string kq;
	switch (a){
		case 0:
			kq = "khong";
			break;
		case 1:
			kq = "mot";
			break;
		case 2:
			kq = "hai";
			break;
		case 3:
			kq = "ba";
			break;
		case 4:
			kq = "bon";
			break;
		case 5:
			kq = "nam";
			break;
		case 6:
			kq = "sau";
			break;
		case 7:
			kq = "bay";
			break;
		case 8:
			kq = "tam";
			break;
		case 9:
			kq = "chin";
			break;
	}
	return kq;		
}
void hien_thi(int a){
	int b,c,d,e;
	e = a%10;a/=10;
	string e1 = chuyendoi(e);
	d = a%10;a/=10;
	string d1;
	if (d!=0){
		d1 = chuyendoi(d)+"muoi";
	}
	else{
		d1 = "linh";
	}
	c = a%10;a/=10;
	string c1 = chuyendoi(c);
	b = a%10;
	string b1 = chuyendoi(b);
	cout<<b1<<" nghin "<<c1<<" tram "<<d1<<" "<<" "<<e1<<endl;
}
int main(){
	int a;
	nhap(a);
	hien_thi(a);
}
