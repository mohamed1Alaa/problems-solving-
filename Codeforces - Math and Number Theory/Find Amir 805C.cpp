#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  int n,ans=0;
  cin >> n;
  vector<int> v(n);
  iota(v.begin(),v.end(),1);
  int i = 0,j = n-1,f=0;
  while(i < j){
    ans += ((v[i]+v[j])%(n+1));
    if (f == 0) i++,f=1;
    else j--,f = 0;
  }
  cout << ans << '\n';
  return 0; 
}
