#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	bool c[100003];
	int count=0;
	for(int i=1;i<=n;i++){
	    int m;
	    cin>>a[i];
	    cin>>m;
	    int b;
	    for(int i=1;i<=m;i++){
	        cin>>b;
	        c[b]=true;
	    }
	}
	for(int i=1;i<=n;i++){
	    c[a[i]]=false;
	}
	for(int i=1;i<=9999;i++){
	    if(c[i]==1){
	        count++;
	    }
	}
	cout<<count;
}
