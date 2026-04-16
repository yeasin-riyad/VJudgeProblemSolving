#include<bits/stdc++.h>
using namespace std;

  bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int> cal;

        while(x>0){
              int mod=x%10;
            x=x/10;
          
            cout<<mod<<" ";
            cal.push_back(mod);
        }
        // for(int i=0;i<cal.size();i++)cout<<cal[i]<<" ";
        return true;

        int l=0,r=cal.size()-1;
        while(l<r){
            if(cal[l]!=cal[r]) return false;
            l++;
            r--;
        }

        return true;
        
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    bool res=isPalindrome(x);
    cout<<res;

    return 0;
}