#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  int n,mx=0;
  cin >> n;
  int arr[n];
  for (int i = 0 ; i < n ; ++i){
    cin >> arr[i];
    while(arr[i]%2==0) arr[i]/=2;
    while(arr[i]%3==0) arr[i]/=3;
  }   
  for (int i = 1 ; i < n ; ++i){
    if (arr[i] != arr[0]){
      cout << "No\n";return 0;
    }
  }
  cout << "Yes\n";
  return 0; 
} 
