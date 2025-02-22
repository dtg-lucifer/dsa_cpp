#include <bits/stdc++.h>

using std::cout, std::cin, std::endl;

void bubble_sort(int arr[], int n)
{
  for (int i = n - 1; i > 0; i--)
  {
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

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

void insertion_sort(int arr[], int n)
{
  for (int i = 0; i <= n - 1; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;
    }
  }
}

void print_arr(int arr[], int n);

int main()
{
  // intput
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Before sorting: ";
  print_arr(arr, n);

  // processing
  // selection_sort(arr, n);
  // bubble_sort(arr, n);
  insertion_sort(arr, n);

  // output
  cout << "After sorting: ";
  print_arr(arr, n);
  return 0;
}

void print_arr(int arr[], int n)
{
  cout << "[ ";
  for (int i = 0; i < n; i++)
  {
    if (i < n - 1)
      cout << arr[i] << ", ";
    else
      cout << arr[i] << " ";
  }
  cout << "]";
  cout << endl;
}