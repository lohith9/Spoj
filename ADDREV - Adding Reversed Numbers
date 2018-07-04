#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       long long int a,b;
       cin>>a>>b;
       long long int rev1=0,rev2=0;
       while(a!=0){
           rev1=rev1*10+(a%10);
           a/=10;
       }
       while(b!=0){
           rev2=rev2*10+(b%10);
           b/=10;
       }
       long long int ans=rev1+rev2,rev3=0;
       while(ans!=0){
           rev3=rev3*10+(ans%10);
           ans/=10;
       }
       cout<<rev3<<endl;
   }
}
