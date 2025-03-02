#include <bits/stdc++.h>

#include "headers/bubble_sort.hpp"
#include "headers/selection_sort.hpp"
#include "headers/insertion_sort.hpp"
#include "headers/merge_sort.hpp"
#include "headers/print_arr.hpp"
#include "headers/quick_sort.hpp"

using std::cout, std::cin, std::endl;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Before sorting: ";
  print_arr(arr, n);

  quickSort(arr, 0, n - 1);

  cout << "After sorting: ";
  print_arr(arr, n);
  return 0;
}
