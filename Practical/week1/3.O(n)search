#include<iostream>
using namespace std;
void find(int arr[],int size,int key)
{
  int i,count=0,flag=0;
  for(i=0;i<size;i++)
  {
    if(key==arr[i])
    { flag=1;
    count++;
    break;}
    else 
    count++;
   }
   if(flag==1)
   cout<<"Present "<<count<<endl;
   else
   cout<<"Not present "<<count<<endl;
  }
int main()
{
  int arr[100],size,key,n;
  cin>>n;
  while(n!=0)

{ cin>>size;
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
   
  }
 cin>>key;
  find(arr,size,key);
 n--;
}
  return 0;
}
