#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  int n;
  cin >> n;
  int arr[n];
  ll ans = 0;
  int cur = 1;
  for (int i = 0 ; i < n ; ++i)
    cin >> arr[i];
  sort(arr,arr+n);
  for (int i = 0 ; i < n ; ++i){
    ans += (max(cur,arr[i])-min(cur,arr[i]));
    cur++;
  }  
  cout << ans << endl;
  return 0; 
}
