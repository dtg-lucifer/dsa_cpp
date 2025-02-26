#ifndef _PRINT_ARR_H_
#define _PRINT_ARR_H_

#include <iostream>

using std::cout, std::endl;

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

#endif // _PRINT_ARR_H_