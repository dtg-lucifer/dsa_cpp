#include <iostream>

#include "../headers/02_second_largest.hpp"

int SecondLargest::findRes(int arr[], int n)
{
  int i, j, largest = arr[0], s_largest = -1;

  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      s_largest = largest;
      largest = arr[i];
    }
    else if (arr[i] < largest && arr[i] > s_largest)
    {
      s_largest = arr[i];
    }
  }

  return s_largest;
}