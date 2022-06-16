#include <bits/stdc++.h>
using namespace std;
int jump(int arr[],int n,int x)
{
  int step=sqrt(n);
  int prev=0;
  int m=min(step,n);
  while((arr[m]-1)<x)
  {
    prev=step;
    step+=sqrt(n);
    if(prev>=n)
     return -1;
  }
  //linear search 
  while(arr[prev]<x)
  {
    prev++;
    if(prev==m)
   return -1;
  }
  //if element is found
  if(arr[prev]==x)
return prev;
return -1;
}
int main()
{  int index;
  int arr[100],size,key,n;
  cin>>n;
  while(n!=0)

{ cin>>size;
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
   
  }
 cin>>key;
 index=jump(arr,size,key);
 n--;
}
if(index==-1)
  cout<<"Not Present"<<index<<endl;
  else
  cout<<"Present"<<index<<endl;
  return 0;
}
