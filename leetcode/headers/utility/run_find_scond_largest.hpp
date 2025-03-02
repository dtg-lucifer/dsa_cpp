#ifndef _RUN_SECOND_LARGEST_HPP
#define _RUN_SECOND_LARGEST_HPP

#include <iostream>
#include <vector>

#include "../second_largest.hpp"

using std::cin, std::cout, std::endl, std::vector;

void find_two_sum()
{
  int n, target;
  cin >> n >> target;
  vector<int> nums(n);

  for (int i = 0; i < n; ++i)
  {
    cin >> nums[i];
  }

  for (int index : result)
  {
    cout << index << " ";
  }
  cout << endl;
}

#endif // _RUN_SECOND_LARGEST_HPP