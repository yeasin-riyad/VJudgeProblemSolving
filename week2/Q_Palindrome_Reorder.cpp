#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    string s;
    cin>>s;
    map<char,int> ch;
    for(int i=0;i<s.length();i++)
    {
        ch[s[i]]++;
    }
    int countOdd=0;
    char oddChar=0;
    for(auto[cha,fre]:ch){
        if(fre%2){
            countOdd++;
            oddChar=cha;
        }

    }

    if(countOdd>1) cout<<"NO SOLUTION";
    else{
       string first="",last="";
        for(auto[chr,cnt]:ch){
            string half(cnt/2,chr);
            first+=half;
            last=half+last;
        }
        string palindrome=first;
        if(oddChar) palindrome+=oddChar;
        palindrome+=last;
        cout<<palindrome;
    }


    return 0;
}