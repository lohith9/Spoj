#include <bits/stdc++.h>

using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	   long int n;
	   cin>>n;
	   long long int a[n];
	   for(int i=0;i<n;i++){
	       cin>>a[i];
	   }
	   long long int sum=0;
	   for(int i=n-1;i>=0;i--){
	       sum+=(i*a[i]-a[i]*(n-i-1));
	   }
	   cout<<sum<<endl;
	}
}
