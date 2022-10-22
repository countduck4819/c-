#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	a = a%100;
	b = b%100;
	c = c%100;
	d = d%100;
	if (a==0 || b==0 ||c==0 || d==0){
		cout<<"00"<<endl;
	}
	int res = ((((a*b)%100)*c)%100)*d;
	if((res%100)<10){
		cout<<"0"<<res%100<<endl;
	}
	else{
		cout<<res%100<<endl;
	}
	return 0;
}

