//لآ اِلَهَ اِلّا اللّهُ مُحَمَّدٌ رَسُوُل اللّهِ 
//صل على سيدنا محمد   
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define T int Tests; cin >> Tests; while(Tests--)
using namespace std;
void FIO()
{
ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);freopen("output.txt","w", stdout);  
#endif
}
const int N = 200005;
int n,k,arr[N];
int main() 
{
  FIO();
  cin >> n >> k;
  for (int i = 0 ; i < n ; ++i) cin >> arr[i];
  sort(arr,arr+n);
  if (k == n) cout << arr[k-1];
  else if (k == 0){
    if (arr[0]-1 > 0) cout << arr[0]-1;
    else cout << -1 ;
  }
  else{
    int ans = arr[k-1];
    if (ans < arr[k]) cout << ans;
    else cout << -1;
  }
  return 0;
}
