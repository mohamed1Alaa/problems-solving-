#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  ll k,a,b;
  cin >> k >> a >> b;
  ll ans = (a/k)+(b/k);
  if ((a<k&&(b%k != 0))||(b<k&&(a%k != 0))) cout << -1;
  else cout << ans;
  
  return 0; 
} 
