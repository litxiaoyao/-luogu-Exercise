#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define ll long long
using namespace std;
int x[1000000], y[10000000];
int main()
{
    ll n, ans1 = 1e9, ans2 = 1e9, mid, c, tem1 = 0, tem2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    sort(x + 1, x + n + 1);
    sort(y + 1, y + n + 1);
    mid = (1 + n) / 2;
    mid = y[mid];
    //  if(n%2==0)
    //  c=(x[n/2]+x[n/2+1])/2-n/2+1;
    //  else
    //  c=(x[n/2+1])-n/2;
    //cout<<mid;
    for (int j = -10001; j <= 10001; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            //cout<<c<<" ";
            tem1 += abs(x[i] - j - (i - 1));
            //cout<<abs(y[i]-mid)<<"  ! ";
            tem2 += abs(y[i] - mid);
            //c++;
        }
        ans1 = min(tem1, ans1);
        ans2 = min(tem2, ans2);
        //cout<<ans<<' ';
        tem1 = 0; tem2 = 0;
    }
    cout << ans1+ans2 << '\n';
}