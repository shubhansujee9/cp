#include <bits/stdc++.h>

typedef long long LL;
typedef double DB;

#define sf scanf
#define pf printf
#define mp make_pair
#define nl printf("\n")

#define FOR(i,a,b) for(i = a; i <= b; ++i)
#define FORD(i,a,b) for(i = a; i >= b; --i)
#define FORS(i,n) for(i = 0; i < n; ++i)
#define FORM(i,n) for(i = n - 1; i >= 0; --i)
#define reset(i,n) memset(i, n, sizeof(i))
#define open freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define close fclose(stdin); fclose(stdout)

using namespace std;

const LL mod = 1e9 + 7;
const LL INF = 4e18;
const int inf = 2e9;

int gcd(int a, int b) { return b? gcd(b, a%b): a; }
int lcm(int a, int b) { return a/ gcd(a, b)*b; }

int h[55], b[55];

int main(void)
{
	int n, i, j;
	sf("%d", &n);
	while(n) {
		reset(h, 0);
		reset(b, 0);
		FORS(i, n) {
			sf("%d", h + i);
			FORD(j, i-1, 0) {
				b[i] = max(b[i], b[j] + h[i] + h[j] - abs(h[i] - h[j]));
			}
		}
		vector<int> ans;
		FORS(i, n) {
			bool bisa = 1;
			FORS(j, n) {
				if(i == j || !bisa) continue;
				if(j < i) {
					if(b[j] + h[j] >= b[i])
						bisa = 0;
				} else {
					if(b[j] - h[j] <= b[i])
						bisa = 0;
				}
			}
			if(bisa) ans.push_back(i+1);
		}
		int sz = (int) ans.size();
		pf("%d", ans[0]);
		FOR(i, 1, sz-1) pf(" %d", ans[i]);
		if(sz) nl;
		//FORS(i, n) pf("%d ", b[i]); nl;
		sf("%d", &n);
	}
	
	return 0;
}
