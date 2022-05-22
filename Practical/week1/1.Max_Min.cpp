// To find the maximum and minimum element in an sorted array
#include <iostream>
using namespace std;
class element
{ 
int max,min,size;
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
void find() // to find the maximum and minimum element in an array
{
  int i;
  max=arr[0];
  min=arr[0];
  for(i=0;i<size;i++)
  {
    if(max<arr[i])
    {
      max=arr[i];
    }
    if(min>arr[i])
    {
      min=arr[i];
    }
  }
}
void display() //to display the max and min element
{
  cout<<"The Maximum element is : ";
  cout<<max;
  cout<<endl;
  cout<<"The Minimum element is : ";
  cout<<min;
}
  
};
int main()
{ element obj;
obj.getdata();
obj.find();
obj.display();
  

    return 0;
}
