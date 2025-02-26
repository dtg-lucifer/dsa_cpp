#ifndef _SELECT_SORT_H_
#define _SELECT_SORT_H_

void selection_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_index = i;
    for (int j = i + 1; j <= n - 1; j++)
    {
      if (arr[j] < arr[min_index])
      {
        min_index = j;
      }
    }

    int temp = arr[min_index];
    arr[min_index] = arr[i];
    arr[min_index] = arr[i];
    arr[i] = temp;
  }
}

#endif // _SELECT_SORT_H_