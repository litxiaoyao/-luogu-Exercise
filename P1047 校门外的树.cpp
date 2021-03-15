#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int a[10005] = {0};
int main() {
	int l, m, u, v;
	cin >> l >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		for (int j = u; j <= v; j++)
			if (a[j] == 0)	a[j] = 1;//¿³µô
	}
	int cnt = 0;
	for (int i = 0; i <= l; i++) {
		if (a[i] == 0)cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}