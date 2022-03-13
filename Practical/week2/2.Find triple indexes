//Find the no. of triple index satisfy the condition arr[i]+arr[j]=arr[k]
#include <iostream>
using namespace std;
class element
{ 
int size,key;
 int arr[100];
public:
void getdata()
{ int i;
  cout<<"enter the size of array"<<endl;
  cin>>size;
  cout<<"enter the elements in the array"<<endl;
  for(i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  
}
void triple()
{ int count=0;
int r,s,t;
for(int i=1;i<size-1;i++)
{ r=arr[i-1];//current element
s=arr[i];//next element
t=arr[i+1];//second next element from the current element
  {
    if(r+s==t)
    count++;
  }
}

if(count!=0)
cout<<"the total triplet index is found :"<<count<<endl;
else
    cout<<"Triplet is not found in an array"<<endl;


}
};
int main()
{ element obj;
obj.getdata();
obj.triple();
 return 0;
}
