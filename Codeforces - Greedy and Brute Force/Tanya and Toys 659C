#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  int n,m;
  cin >> n >> m;
  int arr[n];
  vector<int> ans;
  for (int i = 0 ; i < n ; ++i)
    cin >> arr[i];
  sort(arr,arr+n);
  int j = 0;
  for (int i = 1 ; i <= 1e9 ; ++i){
    if (i != arr[j] && i <= m){
      m -= i;
      ans.push_back(i);
    }
    else if (i == arr[j]){
      j++;
      j = min(j,n-1);
    }
    else break;
  }
  cout << ans.size() << endl;
  for (auto& x : ans) 
    cout << x << ' ';
  cout << endl;  
  return 0; 
}
