#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	string s; cout<<"Nhap xau ky tu s: "; getline(cin, s);
	int count=0;
	for(int i=0;i<s.size()-1;i++){
		for(int j=s.size()-1;j>i;j--){
			if(s[i]=='a'&&s[j]=='z'){
				count++;
			}
		}
	}
	cout<<"So xau con \"dau xuoi duoi lot\" la: "<<count<<'\n';
	return 0;
}

