#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        bool inserted=false;
        cin >> s;
        int len = s.size();
  
            for(int i=1;i<len;i++){
                if(s[i-1]==s[i]){
                    inserted=true;
                    if(s[i-1]!='a'){
                        s.insert(s.begin()+i,'a');
                    }else{
                         s.insert(s.begin()+i,'z');

                    }
                    break;
                }
            }

        
        if(!inserted){
            char ch=s[0];
            if(ch!='a') s.insert(s.begin(),'a');
            else s.insert(s.begin(),'z');
        }
        cout<<s<<"\n";
    }
    return 0;
}