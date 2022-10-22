#include<iostream>
#include<iomanip>
#include<math.h>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
void docdulieutufile(int &n,double *&a){
	ifstream f;
	f.open("input.txt",ios::in);
	f>>n;
	for (int i=0;i<n;i++){
		f>>a[i];
	}
	f.close();
}
void hienthimang(int n,double *a){
	cout<<"hien thi n va mang : "<<endl;
	cout<<"n = "<<n<<endl;
	for (int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "<<a[i]<<endl;
	}
	cout<<"Ket thuc hien thi mang ! "<<endl;
}
void nhap(int &k,double &x,int n){
	cout<<"Nhap vao so k : "<<endl;cin>>k;
	while ((k>n)||(k<1)){
		cout<<"Nhap vao so k : "<<endl;cin>>k;
	}
	cout<<"Nhap vao so thuc x : "<<endl;cin>>x;
}
void chen(int k,double x,int &n,double *&a){
	double *b = new double[n+1];
	for (int i=0;i<n;i++){
		b[i]=a[i];
		if (i!=k-1){
			b[i]=a[i];
		}
		else{
			b[i]=x;
			break;
		}
	}
	for (int i=k;i<n;i++){
		b[i]=a[i-1];
	}
	delete[] a;
	a = nullptr;
	a = new double [n+1];
	n++;
	for (int i=0;i<n;i++){
		a[i]=b[i];
	}
	delete[] b;
	b = nullptr;
	
}
void ghifile1(int n,int k,double *a){
	ofstream f;
	f.open("output1.txt",ios::out);
	f<<"k = "<<k<<endl;
	f<<"n = "<<n<<endl;
	f<<"Mang sau khi chen la : "<<endl;
	for (int i=0;i<n;i++){
		f<<a[i]<<" ";
	}
	f.close();
}
int ktrasoam(int n,double *a){
	int dem=0;
	for (int i=0;i<n;i++){
		if(a[i]<0){
			dem++;
		}
	}
	return dem;
}
void xoamang(int &n,int *&b,double *&a,int &dem){
	for (int i=0;i<n;i++){
		if (a[i]<0){
			b[dem] = i;
			dem++;
		}
	}
	n-=dem;
	double *c = new double [n];
	for (int i=0;i<n;i++){
		if (a[i]>0){
			c[i]=a[i];
		}
	}
	delete[] a;
	a=nullptr;
	for (int i=0;i<n;i++){
		a[i]=c[i];
	}
	delete[] c;
	c = nullptr;
	
}
void ghifile2(int n,int *b,double *a,int dem){
	ofstream f;
	f.open("output.txt",ios::out);
	f<<"n = "<<n<<endl;
	f<<"cac vi tri da xoa gom : ";
	for (int i;i<dem;i++){
		f<<"Vi tri : "<<b[i]<<endl;
	}
	cout<<"Mang da xoa la : "<<endl;
	for (int i=0;i<n;i++){
		f<<"a["<<i<<"]="<<a[i]<<endl;
	}
	f.close();
}
int main(){
	int n;
	double *a = new double [n];
	docdulieutufile(n,a);
	double *c = new double [n];
	for (int i=0;i<n;i++){
		c[i]=a[i];
	}
	int m=n;
	hienthimang(n,a);
	int k;
	double x;
	nhap(k,x,n);
	chen(k,x,n,a);
	ghifile1(n,k,a);
	int h = ktrasoam(m,c);
	int *b = new int [h];
	int dem=0;
	xoamang(n,b,a,dem);
	ghifile2(n,b,a,dem);
	return 0;
}
