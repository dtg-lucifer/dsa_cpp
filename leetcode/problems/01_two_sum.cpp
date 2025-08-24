#include <iostream>
#include <vector>
#include <unordered_map>

#include "../headers/01_two_sum.hpp"

std::vector<int> TwoSumSolution::twoSum(std::vector<int> &nums, int target)
{
  std::unordered_map<int, std::pair<int, int>> map;

  for (auto it = nums.begin(); it != nums.end(); ++it)
  {
    int index = std::distance(nums.begin(), it);

    if (map.find(*it) != map.end())
    {
      int diff_index = map[*it].first;
      return std::vector<int>{diff_index, index};
    }

    int diff = target - (*it);
    map.insert({diff, {index, *it}});
  }

  return std::vector<int>{};
}