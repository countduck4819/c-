#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int b[4][3] = {
				{134,136,140},
				{134,135,137},
				{135,137,143},
				{132,135,136}
			};
void hienthimang2chieu(int b[4][3],int m,int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<b[i][j]<<"\t";	
		}
		cout<<endl;
	}
}
void hienthimang2chieu1(int b[4][4],int m,int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<b[i][j]<<"\t";	
		}
		cout<<endl;
	}
}
void nhapmang2chieu(int b[][],int m,int n){
	int i,j;
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<"b["<<i<<"]"<<"["<<j<<"]=";cin>>b[i][j];
		}
	}
}
int main(){
	cout<<"Mang dc khoi tao"<<endl;
	hienthimang2chieu(b,4,3);
	int d[4][4];
	nhapmang2chieu(d,4,4);
	cout<<"Hien thi mang 4"<<endl;
	hienthimang2chieu1(d,4,4);
	return 0;
}
