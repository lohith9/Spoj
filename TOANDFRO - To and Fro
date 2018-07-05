#include <bits/stdc++.h>

using namespace std;

int main() {
   long int col;
   string s;
   while(1){
       cin>>col;
        if(col==0){
            break;
        }
        else{
           cin>>s;
           long int len=s.size();
           long int row=len/col;
           char s1[row][col];
           int index=0;
           for(int i=0;i<row;i++){
               if(i%2==0){
                   for(int j=0;j<col;j++){
                       s1[i][j]=s[index++];
                   }
               }
               else{
                  for(int j=col-1;j>=0;j--){
                      s1[i][j]=s[index++];
                  } 
               }
           }
           for(int i=0;i<col;i++){
               for(int j=0;j<row;j++)
               cout<<s1[j][i];
           }
           cout<<endl;
        }
   }
}
