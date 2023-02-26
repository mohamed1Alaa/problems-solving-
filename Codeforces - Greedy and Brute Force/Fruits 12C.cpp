#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  int n,m;
  string s;
  cin >> n >> m;
  map<string,int> mp;
  vector<int> arr(n),v;
  for (int i = 0 ; i < n ; ++i)
    cin >> arr[i];
  for (int i = 0 ; i < m ; ++i){
    cin >> s;
    mp[s]++;
  }
  ll ans1 = 0,ans2 = 0;
  for (auto& x : mp)
    v.push_back(x.second);
  sort(arr.begin(),arr.end());
  sort(v.rbegin(),v.rend());
  for (int i = 0 ; i < v.size() ; ++i){
    ans1 += v[i]*arr[i];
  }
  for (int i = 0 ; i < v.size() ; ++i){
    ans2 += v[i]*arr[n-i-1];
  }
  cout << ans1 << ' ' << ans2 << endl;  
  return 0; 
}
