/*                          لآ اِلَهَ اِلّا اللّهُ مُحَمَّدٌ رَسُوُل اللّهِ 
                                 صل على سيدنا محمد   
*/
#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int Tests; cin >> Tests; while(Tests--)
#define lli long long int
#define ll long long
#define endl '\n'
using namespace std;
void solve()
{
  ll sum = 0;
  int n,m,cnt=0;
  cin >> n >> m;
  int a[n],b[n],diff[n];
  for (int i = 0 ; i < n ; ++i){
    cin >> a[i] >> b[i];
    sum += a[i];
    diff[i] = a[i]-b[i];
  }
  sort(diff,diff+n);
  reverse(diff,diff+n);
  int i = 0;
  while(sum > m && i < n){
    if (diff[i]) sum -= diff[i],cnt++;
    i++;
  }
  if (sum <= m) cout << cnt << endl;
  else cout << "-1\n";
} 
int main()
{
  Mo7amed_Alaa
  solve();
  return 0;
}
