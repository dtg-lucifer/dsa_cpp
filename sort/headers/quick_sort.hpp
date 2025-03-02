#ifndef _QUICK_SORT_H
#define _QUICK_SORT_H

#include <utility>

int partition(int arr[], int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {
    while (arr[i] <= pivot && i < high)
    {
      i++;
    }

    while (arr[j] > pivot && j > low)
    {
      j--;
    }

    if (i < j)
      std::swap(arr[i], arr[j]);
  }
  std::swap(arr[low], arr[j]);
  return j;
}

void quickSort(int arr[], int low, int high)
{
  if (low < high)
  {
    int p = partition(arr, low, high);
    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
  }
}

#endif // _QUICK_SORT_H
