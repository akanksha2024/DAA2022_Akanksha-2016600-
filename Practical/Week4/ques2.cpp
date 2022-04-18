#include<iostream>
using namespace std;
//void display(int*,int ,int);
int part(int*,int ,int,int );
void quick(int*,int ,int ,int );
void swapping(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
int part(int arr[],int l,int r)
{ int swap=0;
  int p=arr[r];
  int i=l-1;
  for(int j=l;j<=r;j++)
  {
    if(arr[j]<=p)
    {
      i++;
      swapping(&arr[i],&arr[j]);
      swap++;
    }
  }
   swapping(&arr[i+1],&arr[r]);
   swap++;
  return (i+1);
}
void quick(int*arr,int l,int r,int n)
{
  if(l<r)
  {int mid=part(arr,l,r);
  quick(arr,l,mid-1,n);
  quick(arr,mid+1,r,n);
}
cout<<"The Sorted Array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
     int comparision=n*(n-1)/2;
    cout<<endl;
    cout<<"The no. of comparision"<<endl;
    cout<<comparision;
    cout<<endl;
    cout<<"The no. of swaps"<<endl;
    cout<<swap;
   

}
 

int main()
{
    int arr[100],t,n,i;
    cout<<"Enter the test case"<<endl;
    cin>>t;
    while(t>0)
    { cin>>n;
      for(i=0;i<n;i++)
    {
        cin>>arr[i];

    } 
    
    quick(arr,0,n-1,n);
   
    t--;
   }
    
   
    return 0;

}
