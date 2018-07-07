#include <bits/stdc++.h>

using namespace std;
int main() {
    long long int k,n;
    cin>>k>>n;
    unsigned long long int val[n],weight[n],a[n+1][k+1];
    for(int i=0;i<n;i++){
        cin>>weight[i]>>val[i];
    }
    for(int i=0;i<=n;i++){
        for(int w=0;w<=k;w++){
            if(i==0 || w==0){
                a[i][w]=0;
            }
            else if(weight[i-1]<=w){
                a[i][w]=max(val[i-1]+a[i-1][w-weight[i-1]],a[i-1][w]);
            }
            else{
                a[i][w]=a[i-1][w];
            }
        }
    }
            cout<<a[n][k];
}
