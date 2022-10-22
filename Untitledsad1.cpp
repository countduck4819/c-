#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream file;
	file.open("text.txt");
	int a[20];
	int n;
	file>>n;
	cout<<"gia tri cua n : "<<n<<endl;
	for(int i=0;i<n;i++){
		file>>a[i];
		cout<<a[i];
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"gia tri thu"<<i+1<<a[i];
	}
	file.close();
	//ghi file
	ofstream file1 ("giatri.txt");
	for(int i=n-1;i>=0;i--){
		file1<<a[i]<<endl;
	}
	file1.close();
}

