#include<iostream>
#include<math.h>
#include<iomanip>
#include<fstream>
using namespace std;
// Doc ghi file don gian
void WriteFile(const char*path){
	fstream fp;
	fp.open(path,ios::out);
	fp<<"Problem name : exp1"<<endl;
	fp<<"Maximize"<<endl;
	fp<<"obj:\t\t\t x1 "<<"+ 2*x2+3*x3+x4"<<endl;
	fp<<"Subject to"<<endl;
	fp<<"\t c1: x2-3.5*x4"<<endl;
	fp<<"Bounds"<<endl;
	fp<<"\t 0<=x1<=40"<<endl;
	fp<<"General"<<endl;
	fp<<"\t x4"<<endl;
	fp<<"endl";
	fp.close();
	
}
void ReadFile(char *path){
	fstream fp;
	fp.open(path,ios::in);
	char s[255];
	while(!fp.eof()){
		fp.getline(s,255);
		cout<<s<<endl;
	}
	fp.close();
} 
int main(){
	char path[100];
	cout<<"Nhap ten file";gets(path);
	cout<<path;
	WriteFile(path);
	ReadFile(path);
	return 0;
}
