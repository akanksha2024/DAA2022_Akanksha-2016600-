#include <bits/stdc++.h> //time complexity O(nlogn)

using namespace std;
int binarySearch(int arr[],int l,int r,int x)
{
  if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main()
{ int n,x;//n size ,x=key
  int arr[100];
  cin>>n;
  cin>>x;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr, arr + n);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result-1;
    return 0;
}
   
