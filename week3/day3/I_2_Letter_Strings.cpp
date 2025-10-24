#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> str(n);
        map<char,int> first_coourence;
        map<char,int> last_occurence;
        map<string,int> count;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            str[i]=s;
            first_coourence[s[0]]++;
            last_occurence[s[1]]++;
            count[s]++;
        }

        long long result=0;
        for(int i=0;i<n;i++){
            int val=max(0,last_occurence[str[i][1]]-count[str[i]]);
            result+=val;
              if(last_occurence[str[i][1]]>0) last_occurence[str[i][1]]--;

            int val2=max(0,first_coourence[str[i][0]]-count[str[i]]);
            result+=val2;    
            if(first_coourence[str[i][0]]>0) first_coourence[str[i][0]]--;

            if(count[str[i]]>0) count[str[i]]--;

        }
        cout<<result<<"\n";
    }
    
    return 0;
}