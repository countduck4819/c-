#include<bits/stdc++.h>
#include<map>
#include<set>
#include <sstream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
	map <int,int> mp;
	
	mp.insert({100,1000});
	mp[200]=300;
	mp[400]=500;
	mp.insert({300,400});
	mp[200]=900;
//	mp.erase(200);
	mp.find(300);		
//	cout<<mp.count(300);
//	for(pair <int,int> x:mp){
//		cout<<x.first<<" "<<x.second<<endl;
//	}
//	
//	cout<<mp.size();
//}
}
