#include <iostream>

void print1(int n);
void print2(int n);
void print3(int n);
void print4(int n);

int main()
{
  int t;
  std::cin >> t;

  for (auto i = 0; i < t; i++)
  {
    int n;
    std::cin >> n;

    std::cout << "Test Case: " << i + 1 << std::endl;
    print3(n);
    print4(n);
    std::cout << std::endl;
  }

  return 0;
}

void print1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      std::cout << (i + 1) << " ";
    }
    std::cout << std::endl;
  }
}
void print2(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      std::cout << j << " ";
    }
    std::cout << std::endl;
  }
}
void print3(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int s = 0; s <= (n - i - 1); s++)
    {
      std::cout << " ";
    }

    // star
    for (int j = 0; j < ((i * 2) + 1); j++)
    {
      std::cout << "*";
    }

    // space
    for (int s = 0; s <= (n - i - 1); s++)
    {
      std::cout << " ";
    }
    std::cout << std::endl;
  }
}
void print4(int n)
{
  for (int i = n; i >= 0; --i)
  {
    // space
    for (int s = 0; s <= (n - i - 1); s++)
    {
      std::cout << " ";
    }

    // star
    for (int j = 0; j < ((i * 2) + 1); j++)
    {
      std::cout << "*";
    }

    // space
    for (int s = 0; s <= (n - i - 1); s++)
    {
      std::cout << " ";
    }
    std::cout << std::endl;
  }
}