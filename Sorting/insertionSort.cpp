#include <bits/stdc++.h>

void insertionSort(int arr[] , int n)
{
  for(int i = 0 ; i < n ; i++)
  {
    int key = arr[i];
    int j = i-1;
    while(key < arr[j] && j >= 0)
    {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
  }
}

int main()
{
  int n;
  std::cin>>n;
  int arr[n];
  for(int i = 0 ; i < n ; i++)
    std::cin>>arr[i];
  insertionSort(arr , n);
  for(int i = 0 ; i < n ; i++)
    std::cout<<arr[i];
}
