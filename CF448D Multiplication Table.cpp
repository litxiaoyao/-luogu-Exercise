/*check函数思路：（第九行自行草稿演算 可得每一次相加得到的是一竖排比mid小的值）
第k大的数有一个特点, 就是比它小的数一定小于k个, 当比它小的数大于等于k个的时候, 一定不是第k大的数
小于k个：l=mid+1  大于等于k个：r=mid;*/
#include<iostream>
using namespace std;
long long n, m, k;
bool check(long long mid) {
    long long sum = 0;
    for (int i = 1; i <= n; i++)    sum += min(m, mid / i);//每一竖列小于k的不可能超过m（mid==k也算）
    return sum < k;
}
int main() {
    while (cin >> n >> m >> k) {
        long long r = n * m, l = 1;
        while (l<r) {
            long long mid = (r + l) / 2;
            if (check(mid)) l = mid + 1;//小于mid的个数过少：mid后移
            else  r=mid;//小于mid的个数过多不合格：mid前移
        }
        cout << l << endl;
    }
}