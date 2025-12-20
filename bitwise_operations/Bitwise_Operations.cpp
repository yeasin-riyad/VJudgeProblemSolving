#include<bits/stdc++.h>
using namespace std;

    // check_kth_bit_on_or_off
    // Print_on_and_off_bits
    //turn_on_kth_bit
    //turn_off_kth_bit
    //toogle_kth_bit

    bool check_kth_bit_on_or_off(int n,int k){
        return (n &1<<k);
    }

    bool Print_on_and_off_bits(int n,int k){
        return n&1<<k;
    }

    bool turn_on_kth_bit(int n,int k){
        return n| 1<<k;
    }

    int turn_off_kth_bit(int n,int k){
        return n & ~(1<<k);
    }

    int toogle_kth_bit(int n,int k){
        return n^(1<<k);
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int num,k;
        cin >> num>>k;

    // if(check_kth_bit_on_or_off(num,k)){
    //     cout << "The " << k << "-th bit is ON" << endl;
    // } else {
    //     cout << "The " << k << "-th bit is OFF" << endl;
    // }

    // for(int i=0;i<8;i++){
    //     if(Print_on_and_off_bits(num,i)) {
    //         cout << "Bit " << i << "  ON" << endl;
    //     } else {
    //         cout << "Bit " << i << "  OFF" << endl;
    //     }
    
    // }

    // int res=turn_off_kth_bit(num,k);
    // cout<<res;
   

//    int res=toogle_kth_bit(num,k);
//   cout << "After toggling bit " << k << ": " << res << endl;

    return 0;
}