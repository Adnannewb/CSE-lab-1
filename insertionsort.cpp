#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int X[n];
  for(int i=0;i<n;i++)
  {
    cin>>X[i];
  }
  
  for(int j=1;j<n;j++)
  {
    int key=X[j];
    int i=j-1;
    

    while(i>=0 && X[i]>key)
    {
        X[i+1]=X[i];
        i--;
        X[i+1]=key;
    }
  }
  for(int i=0;i<n;i++)
  cout<<X[i]<<" ";
  cout<<endl;
}