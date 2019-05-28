#include<iostream>  
#include<algorithm>  
using namespace std;   
const int maxn=11000;                  //the upper limit of the number of cows
int a[maxn],n;                         // milk outputs and the number of cows
int main( ){
      cin>>n;                          // the number of cows
      for (int i=1; i<=n; i++) cin>>a[i];// milk outputs
      // Sort milk outputs
      sort(a+1, a+n+1);
      cout<<a[(n+1)/2]<<endl;          // the median milk output
}
