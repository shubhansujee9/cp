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
const double eps = 1e-13;
const int N = 1e5 + 5;

int gcd(int a, int b) { return b? gcd(b, a%b): a; }
int lcm(int a, int b) { return a/ gcd(a, b)*b; }

LL a[N];

int main(void)
{
	//open;
	int t, i, j;
	sf("%d", &t);
	while(t--) {
		LL ans = 0;
		int n, k;
		sf("%d %d", &n, &k);
		FORS(i, n) sf("%lld", &a[i]);
		FORS(i, n) {
			LL buy = k / a[i], b;
			sf("%lld", &b);
			ans = max(ans, buy*b);
		}
		pf("%lld\n", ans);
	}
	
	
	//close;
	return 0;
}
