#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
	ifstream f;
	f.open("doc file.txt",ios::in);
	int a[20];
	int n;
	f>>n;
	cout<<"gia tri cua n :"<<n<<endl;
	for (int i=0;i<n;i++){
		f>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	f.close();


//ghi file
	ofstream file;
	file.open("giatri.txt",ios::out);
	for (int i=n-1;i>=0;i--){
		file<<a[i];
	}
	file.close();
}
