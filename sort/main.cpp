#include <bits/stdc++.h>

using std::cout, std::cin, std::endl;

void bubble_sort(int arr[], int n) {}

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
  selection_sort(arr, n);

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