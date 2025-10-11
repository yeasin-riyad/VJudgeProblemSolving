#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    float result;
    cin>>n;
    while(n--){
        float a,b;
        cin>>a>>b;
        result=result+(a*b);  
    }
      cout << fixed << setprecision(3) << result << "\n";

    return 0;
}