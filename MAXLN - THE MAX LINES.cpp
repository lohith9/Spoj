// triangle in a semi-circle is a right angle triangle.(a^2+b^2=c^2)
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
    for(int i=0;i<t;i++){
        long long int r;
        cin>>r;
        printf("Case %d: %.2f\n",i+1,4*r*r+0.25);
    }
    return 0;
}
