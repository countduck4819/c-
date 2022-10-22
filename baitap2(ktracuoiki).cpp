#include<iostream>
#include<iomanip>
#include<math.h>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
void nhapn(int &n){
	do{
		cout<<"Nhap vao so nguyen duong n sao cho n>=5 : "<<endl;cin>>n;
		cout<<endl;
	} while(n<5);
}
void nhapday(int n,int *&d){
	cout<<"Nhap vao day d: "<<endl;
	for (int i=0;i<n;i++){
		cout<<"d["<<i<<"]= ";cin>>d[i];
	}
}
void hienthidayd(int n,int *d){
	cout<<"hien thi day d : "<<endl;
	for(int i=0;i<n;i++){
		cout<<"d["<<i<<"]= "<<d[i]<<endl;
	}
	cout<<"Ket thuc hien thi day !"<<endl;
}
void daonguoc(int n,int *&d){
	int *c = new int[n];
	int dem=0;
	for(int i=n-1;i>=0;i--){
		c[dem]=d[i];
		dem++;
	}
	delete d;
	d = nullptr;
	d = new int[n];
	for (int i=0;i<n;i++){
		d[i]=c[i];
	}
	for(int i=0;i<n;i++){
		cout<<"d["<<i<<"]= "<<d[i]<<endl;
	}
	delete c;
	c = nullptr;
	
}
void ghifile1(int n,int *d){
	ofstream f;
	f.open("output1.txt",ios::out);
	f<<"n = ";
	f<<n<<endl;
	f<<"Mang sau khi dao nguoc la : "<<endl;
	for (int i=0;i<n;i++){
		f<<"d["<<i<<"]= "<<d[i]<<endl;
	}
	f.close();
}
void sapxep(int n,int*d){
	int tg;
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (d[i]<d[j]){
				tg = d[i];
				d[i] = d[j];
				d[j]=tg;
			}
		}
	}
}
void ghifile2(int n,int*d){
	ofstream f;
	f.open("output2.txt",ios::out);
	f<<"n = ";
	f<<n<<endl;
	f<<"Mang sau khi sap xep day theo chieu tang dan la : "<<endl;
	for(int i=0;i<n;i++){
		f<<"d["<<i<<"]= "<<d[i]<<endl;
	}
	f.close();
}
int ktsonguyento(int a){
	for (int j=2;j<a;j++){
		if (a%j==0){
			return 0;
		}
	}
	return 1;
}
void xuli(int n,int *d,int *&c,int &t,double &tb,int &k){
//	int *c = new int [];
	for (int i=0;i<n;i++){
		if(ktsonguyento(d[i])==1){
			c[k]=d[i];
			k++;
		}
	}
	for (int i =0;i<k;i++){
		t +=c[i];
	}
	tb = (double) t/k;
}
void ghifile3(int n,int *d,int k,int *c){
	ofstream f;
	f.open("output3.txt",ios::out);
	f<<"So luong so nguyen to la k = "<<k<<endl;
	f<<"Cac so nguyen to co trong day d la :"<<endl;
	for (int i=0;i<k;i++){
		f<<"c["<<i<<"]= "<<c[i]<<endl;
	}
	f<<"n = "<<n<<endl;
	f<<"Day d la : "<<endl;
	for (int i=0;i<n;i++){
		f<<"d["<<i<<"]= "<<d[i]<<endl;
	}
	f.close();
}
int main(){
	int n;
	nhapn(n);
	int *d = new int[n];
	nhapday(n,d);
	hienthidayd(n,d);
	daonguoc(n,d);
	ghifile1(n,d);
	sapxep(n,d);
	ghifile2(n,d);
	int k=0;
	double tb=0;
	int t=0;
	for (int i=0;i<n;i++){
		if(ktsonguyento(d[i])==1){
			k++;
		}
	}
	cout<<k<<endl;
	int *c = new int [k];
	k=0;
	xuli(n,d,c,t,tb,k);
	ghifile3(n,d,k,c);
	cout<<t<<" "<<" "<<tb<<" "<<k;
	return 0;
}

