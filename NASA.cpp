#include<bits/stdc++.h>
using namespace std;

int MAX=(1<<15)-1;
vector<int> palindrome;
bool isPalindrome(int num){
    string s=to_string(num);
    int Size=s.size();
    for(int i=0;i<Size/2;i++){
        if(s[i]!=s[Size-i-1]){
            return false;
            break;
        }
    }
    return true;
}
void insertPalindrome(){
    for(int i=0;i<MAX;i++){
        if(isPalindrome(i)){
            palindrome.push_back(i);
        }

    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    insertPalindrome();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> num(n);
        vector<int> cnt(MAX+1,0);
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            num[i]=x;
            cnt[x]++;
        }
        long long int res=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<palindrome.size();j++){
                int b=num[i]^palindrome[j];
                if(cnt[b]!=0) res+=cnt[b];
            }

        }
        cout<<res/2<<"\n";
    }
    

    return 0;
}