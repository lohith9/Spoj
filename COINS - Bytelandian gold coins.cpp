#include<bits/stdc++.h>
using namespace std;
map<int,long long int>lohith;  // storing in map is easy
long long byte(int n){
    if(n<12)
        return n;
    if(lohith.find(n)!=lohith.end())
    return lohith[n];
    
    long long int ans;
    ans=byte(n/2)+byte(n/3)+byte(n/4);
    lohith[n]=ans;
    return ans;
}
int main(){
   int x;
    while(scanf("%d",&x)!=EOF){
        printf("%lld\n",byte(x));
    }
    return 0;
}
