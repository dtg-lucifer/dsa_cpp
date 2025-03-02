#ifndef _RUN_TWOSUM_HPP
#define _RUN_TWOSUM_HPP

#include <iostream>
#include <vector>

#include "../two_sum.hpp"

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

  TwoSumSolution solution;
  vector<int> result = solution.twoSum(nums, target);

  for (int index : result)
  {
    cout << index << " ";
  }
  cout << endl;
}

#endif // _RUN_TWOSUM_HPP