#include<bits/stdc++.h>
using namespace std;


int main() {
	  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    double n,max=0;
	    cin>>n;
	    int a=ceil(n/2);
	    int b=ceil(n/3);
	    cout<<a<<" "<<b<<"\n";
	}

	return 0;
}