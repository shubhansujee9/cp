#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstdio>
#include <climits>
#include <vector>
#include <map>
#include <list>
#include <deque>
#include <stack>
#include <set>
#include <string>
#include <cstring>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <utility>
#include <functional>

using namespace std;

#define LL long long
#define DB double
#define PI acos(-1.0)
#define sf scanf
#define pf printf
#define nl printf("\n")
#define FOR(i,a,b) for( i=a; i<=b; i++)
#define FORD(i,a,b) for( i=b; i>=a; i--)
#define FORS(i,n) FOR(i, 0, n-1)
#define FORM(i,n) FORD(i, 0, n-1)
#define mp make_pair
#define open freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define close fclose(stdin); fclose(stdout)

const int N = 1000010;

int gcd(int a, int b) { return b? gcd(b,a%b): a; }
int lcm(int a, int b) { return a*b / gcd(a,b); }

int main(void)
{
	char x[1005];
	int a = 0, b = 0, i, n;
	cin >> x; n = strlen(x);
	FORS(i,n)
		if(x[i] == '1')
			a++;
	cin >> x; n = strlen(x);
	FORS(i,n)
		if(x[i] == '1')
			b++;
	if((a%2 == 0 && a >= b)||(a%2 && a+1 >= b))
		puts("YES");
	else
		puts("NO");
	//cout << a <<' '<< b; nl;
	return 0;
}