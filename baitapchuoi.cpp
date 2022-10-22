//bai 1
//#include<bits/stdc++.h>
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string a;
//	getline(cin,a);
//	stringstream ss(a);
//	string word;
//	int dem = 0;
//	while (getline(ss,word,' ')){
//		dem++;
//		cout<<"Tu so "<<dem<<": "<<word<<endl;
//	}
//	cout<<"tong so tu la : "<<dem;
//	return 0;
//}

//Bài 2
//#include<bits/stdc++.h>
//#include<string>
//using namespace std;
//int main(){
//	string a;
//	string b;
//	cout<<"Nhap vao tu ma muon xoa : ";cin>>b;
//	cin.ignore();
//	getline(cin,a);
//	string tu;
//	int dem=0;
//	string chuoimoi = "";
//	stringstream chuoi(a);
//	while (chuoi>>tu){
//		dem++;
//		if (tu !=b){
//			chuoimoi+=tu+" ";
//		}
//		else dem++; continue;
//	}
//	chuoimoi.substr(0,dem);
//	cout<<"Chuoi da cat la : "<<chuoimoi;
//	return 0;
//}

//Bài 3
#include<bits/stdc++.h>
using namespace std;
void nhap(int &a){
	cout<<"Nhap vao so case test: ";cin>>a;
}
void nhapchuoi(string &a){
	cin.ignore(1);
	getline(cin,a);
	for(int i=0;i<a.size();i++){
		if ((a[i]>='A')&&(a[i]<='Z')){
			a[i]+=32;
		}
	}
	cout<<"Ten nguoi do la : "<<a<<endl;
}
string xuli(string a){
	stringstream tach(a);
	string b;
	string d="";
	string c="";
	while (tach>>b){
		d+=b[0];
		c = b;
	}
	c+=d.substr(0,d.size()-1)+"@gmail.com";
	return c;
}
int main(){
	int so;
	nhap(so);
	string a;
	while (so!=0){
		nhapchuoi(a);
		cout<<"Gmail ban nhan dc la : "<<xuli(a)<<endl;
		a = "";
	}
}
