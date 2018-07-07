#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int a[n];
      map<int,int>hash;
      for(int i=0;i<n;i++){
          cin>>a[i];
          hash[a[i]]++;
      }
      int flag=0,maxi=-10005;  // given constarint -1000 to +1000
      for(auto it=hash.begin();it!=hash.end();it++){
          if(it->second>n/2 && maxi<it->first){
              maxi=it->first;
              flag=1;
          }
      }
      if(flag==1)
      cout<<"YES"<<" "<<maxi<<endl;
      else
      cout<<"NO"<<endl;
   }
}
