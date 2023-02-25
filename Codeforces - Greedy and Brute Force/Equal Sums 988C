//لآ اِلَهَ اِلّا اللّهُ مُحَمَّدٌ رَسُوُل اللّهِ 
//صل على سيدنا محمد   
#include <bits/stdc++.h>
#define ll long long
#define T int Tests; cin >> Tests; while(Tests--)
using namespace std;
void run() 
{
	ios::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #else 
    #endif
}
int main() 
{
	run();
    int k;
	cin >> k;
	vector<pair<int, pair<int, int>>> a;
	for (int i = 0; i < k; ++i) 
    {
		int n;cin >> n;
		vector<int> x(n);
		for (int j = 0; j < n; ++j) cin >> x[j];
		int sum = accumulate(x.begin(), x.end(), 0);
		for (int j = 0; j < n; ++j)
			a.push_back(make_pair(sum - x[j], make_pair(i, j)));
	}
	stable_sort(a.begin(), a.end());
	for (int i = 0; i < int(a.size()) - 1; ++i) 
    {
		if (a[i].first == a[i + 1].first && (a[i].second.first != a[i + 1].second.first)) 
        {
			cout << "YES" << endl;
			cout << a[i + 1].second.first + 1 << " " << a[i + 1].second.second + 1 << endl;
			cout << a[i].second.first + 1 << " " << a[i].second.second + 1 << endl;
			return 0;
		}
	}
	cout << "NO\n";
    return 0;
}
