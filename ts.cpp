#include<iostream>
#include<iomanip>
#include<math.h>
#include<malloc.h>
using namespace std;
int main(){
	// cap phat vung nho  cho 1 bien dong new+bien
//	int a=165;
//	int b=2021;
//	int *const ptr_a = &a;
//	ptr_a=&b; 
//	cout<<a<<endl;
//	cout<<b;
//	int *ptr_a = 0;
//	int *b = nullptr;
//	if(ptr_a) cout<<"Not na";
//	else cout<<"Na";
//	int *b = new int;
//	if(b!=nullptr) cout<<"not null";
//	else cout<<"null";
//	cout<<&b;
	
	
	int *myPtr = new int;
	if (myPtr != nullptr){
		cout << "Memory allocated"<<endl;
		cout<<*myPtr<<endl;
	}
	else cout << "Bad allocate";
	delete myPtr;
	cout<<*myPtr;
	*myPtr+=5;
	cout<<*myPtr;
	myPtr = NULL;
	cout<<myPtr;
	cout<<*myPtr;
	
}
