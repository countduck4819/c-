#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
	ifstream f;
	f.open("C:\\Users\\DELL\\Desktop\\Input.txt",ios::in);
	if (f.fail()==true){
		cout<<"File ko ton tai";
//		system("Pause");
	}
	else{
		cout<<"File co ton tai";
	}
	string x;
	string y;
	f>>x;
	f>>y;cout<<x+y;
	cout<<endl<<x<<endl;
	cout<<y<<"het";
	f.close();
	ofstream f1;
	f1.open("C:\\Users\\DELL\\Desktop\\Input.txt",ios::out);
	f1<<x+y;
	f1.close();
}
