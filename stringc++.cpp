#include<bits/stdC++.h>
#include<iostream>
#include<map>
#include <istream>
#include <ostream>

using namespace std;
int main(){
//	int a;cin>>a;
//	string s;
//	cin.ignore();
//	getline(cin,s);
//	cout<<s;
//	return 0;
	map <int,int> mp;
	mp[100]=200;
	mp.insert({200,300});
	cout<<mp.find(100);
	
}
