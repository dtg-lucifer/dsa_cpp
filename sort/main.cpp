#include <bits/stdc++.h>

#include "headers/bubble_sort.h"
#include "headers/selection_sort.h"
#include "headers/insertion_sort.h"
#include "headers/merge_sort.h"
#include "headers/print_arr.h"

using std::cout, std::cin, std::endl;

int main()
{
  //? input
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Before sorting: ";
  print_arr(arr, n);

  //? processing
  // selection_sort(arr, n);
  // bubble_sort(arr, n);
  // insertion_sort(arr, n);
  merge_sort(arr, 0, n - 1);

  //? output
  cout << "After sorting: ";
  print_arr(arr, n);
  return 0;
}
