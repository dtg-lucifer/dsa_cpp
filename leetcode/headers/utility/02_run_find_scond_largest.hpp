#ifndef _RUN_SECOND_LARGEST_HPP
#define _RUN_SECOND_LARGEST_HPP

#include <iostream>
#include <vector>

#include "../02_second_largest.hpp"

using std::cin, std::cout, std::endl, std::vector;

void find_second_largest()
{
  int n;
  cin >> n;
  int nums[n];

  for (int i = 0; i < n; ++i)
  {
    cin >> nums[i];
  }

  SecondLargest sl;
  int res = sl.findRes(nums, n);

  cout << res << endl;
}

#endif // _RUN_SECOND_LARGEST_HPP