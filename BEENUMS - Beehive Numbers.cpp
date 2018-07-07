#include <bits/stdc++.h>

using namespace std;

int main() {
   long int a;
   while(1){
       cin>>a;
        if(a==-1){
            break;
        }
        else{
           long int i=0;
           int flag=0;
            while(i<=a/6){
          //      cout<<(3*i*(i+1)+1)<<" ";
                if(((3*i*(i+1))+1)==a){
                    flag=1;
                    break;
                }
                    i++;
            }
            if(flag==1){
                cout<<"Y"<<endl;
            }
            else{
                cout<<"N"<<endl;
            }
        }
   }
}
