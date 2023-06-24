#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <iomanip>
#include <map>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

map<string, double> mp = {
	{ "A+", 4.5 },
	{"A0", 4.0 },
	{"B+", 3.5 },
	{"B0", 3.0 },
	{"C+", 2.5 },
	{"C0", 2.0 },
	{"D+", 1.5 },
	{"D0", 1.0 },
	{"F", 0.0 }
};

double calc(double v, const string& p) {
	return v * mp[p];
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	double v;
	string p;

	auto ct = double{ 0 };
	auto sum = double{ 0 };
	while (cin >> s >> v >> p) {
		if ("P" == p) {
			continue;
		}

		ct += v;
		sum += calc(v, p);
	}

	cout << fixed << setprecision(6) << sum / ct;

	return 0;
}