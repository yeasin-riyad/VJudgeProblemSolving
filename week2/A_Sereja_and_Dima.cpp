#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int sereja = 0;
    bool serejas_turn = true;

    int dima = 0;
    while (!num.empty())
    {
        int first = num.front();
        int last = num.back();
        if (first > last)
        {
            if (serejas_turn)
            {
                sereja += first;
                serejas_turn = false;
            }
            else
            {
                dima += first;
                serejas_turn = true;
            }
            num.erase(num.begin());
        }
        else
        {
            if (serejas_turn)
            {
                sereja += last;
                serejas_turn = false;
            }
            else
            {
                dima += last;
                serejas_turn = true;
            }
            num.pop_back();
        }
    }
    cout << sereja << " " << dima;
    return 0;
}