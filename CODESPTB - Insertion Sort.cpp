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
	  long int count=0,j,i,key;
	  for(int i=1;i<n;i++){
	       key=a[i];
	      j=i-1;
	      while(j>=0 && a[j]>key){
	          a[j+1]=a[j];
	          j=j-1;
	          count++;
	      }
	      a[j+1]=key;
	  }
	  cout<<count<<endl;
	}
}
