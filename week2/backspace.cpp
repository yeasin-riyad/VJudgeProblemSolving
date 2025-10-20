#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(!st.empty()){
            if(s[i]=='<') st.pop();
            else st.push(s[i]);

        }else{
            st.push(s[i]);
        }
    }
     
    string res;

    while(!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(),res.end());
    cout<<res;
    return 0;
}