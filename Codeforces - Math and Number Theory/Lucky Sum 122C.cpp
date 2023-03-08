#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
vector<ll> l;
void help(ll n){
  if (n > 1e10) return;
  l.push_back(n);
  help(n*10+4);
  help(n*10+7);
}
int main()
{
  Mo7amed_Alaa
  int left,right;
  ll ans = 0;
  cin >> left >> right;
  ll last = left;
  help(0);
  sort(l.begin(),l.end());
  for(int i = 0 ; i < l.size() ; ++i){
    if (l[i] < left) continue;
    if (l[i] >= right){
      ans += (right-last+1)*l[i];
      break;
    }
    ans += (l[i]-last+1)*l[i];
    last = l[i]+1;
  }
  cout << ans << '\n';
  return 0; 
}
