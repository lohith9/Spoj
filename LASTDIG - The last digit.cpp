#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      long long int a,b;
      cin>>a>>b;
       int l=a%10;
          int m=b%4;
      if(b==0){
          cout<<"1"<<endl;
      }
      else if(l==1 || l==0 || l==5 || l==6){
          cout<<l<<endl;
      }
      else if(m==1){
          cout<<l<<endl;
      }
      else if(m==2){
          cout<<(l*l)%10<<endl;
      }
      else if(m==3){
          cout<<(l*l*l)%10<<endl;
      }
      else if(m==0){
          cout<<(l*l*l*l)%10<<endl;
      }
  }
}
