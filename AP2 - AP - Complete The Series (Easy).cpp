#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int a,b,c,d,e;
	    cin>>a>>b>>c;
	    long long int n;
	    n=(2*c)/(a+b);
	    d=(b-a)/(n-5);
	    e=a-(2*d);
	    cout<<n<<endl;
	        for(int i=0;i<n;i++){
          cout<<(e+(i*d))<<" ";
	        }
                cout<<endl;

	}
}
