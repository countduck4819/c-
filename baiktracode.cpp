//#include<iostream>
//#include<iomanip>
//#include<math.h>
//using namespace std;
//void nhapsoth(int &a){
//	cout<<"Nhap vao so t la so truong hop ban muon :"<<endl;cin>>a;
//}
//void nhapdodai(int &n){
//	cout<<"Nhap vao do dai cua tung truong hop :"<<endl;cin>>n;
//}
//void nhapmang(int a[],int n){
//	for (int i=0;i<n;i++){
//		cout<<"a["<<i<<"] = ";cin>>a[i];
//	}
//}
//int th1(int a[],int n){
//	int dem=0;
//	for(int i=0;i<n;i++){
//		if (a[i]==0){
//			dem++;
//		}
//	}
//	return n-dem;
//}
//bool ktra(int a[],int n){
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if (a[i]==a[j]){
//				return true;
//			}	
//		}
//	}
//	return false;
//}
//int th2(int a[],int n){
//	if (ktra(a,n)==true){
//		return n;
//	}
//	else{
//		return n+1;
//	}
//}
//int main(){
//	int t,a[100],n;
//	nhapsoth(t);
//	do{
//		nhapdodai(n);
//		a[n]=0;
//		nhapmang(a,n);
//		int so=0;
//		for(int i=0;i<n;i++){
//			if (a[i]==0){
//				so++;
//			}
//		}
//		if(so!=0){
//			cout<<th1(a,n);
//		}
//		else if(so==0){
//			cout<<th2(a,n);
//		}
//		t--;	
//	}while (t!=0);
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;

bool tim0(int a[105], int n)
{
	int i;
	for (i=1;i<=n;i++)
	if (a[i]==0) return true;
	return false;
}

int dem0(int a[105], int n)
{
	int i, dem=0;
	for (i=1;i<=n;i++)
	if (a[i]==0) dem++;
	return dem;
}

int dembang(int a[105], int n)
{
	int i,j;
	for (i=1;i<n;i++)
	 for (j=i+1;j<=n;j++)
	  {
	  	if (a[i]==a[j] && a[i]!=0)
	  	return true;
	  }
	return false;
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n, a[105], i;
		cin>>n;
		for (i=1;i<=n;i++)
		cin>>a[i];
		if (tim0(a,n))
		cout<<n-dem0(a,n)<<"\n";
		else if (dembang(a,n))
		cout<<n<<"\n";
		else cout<<n+1<<"\n";		
	}
	return 0;
}
