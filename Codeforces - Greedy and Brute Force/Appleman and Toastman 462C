/*                          لآ اِلَهَ اِلّا اللّهُ مُحَمَّدٌ رَسُوُل اللّهِ 
                                 صل على سيدنا محمد   
*/
#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int Tests; cin >> Tests; while(Tests--)
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
  Mo7amed_Alaa
  int n;
  ll sum = 0;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0 ; i < n ; ++i) cin >> v[i];
  sort(v.begin(),v.end());
  for (int i = 0 ; i < n-1 ; ++i) sum += v[i] * (i+2);
  sum += n*v[n-1];
  cout << sum << endl;
  return 0;
}
