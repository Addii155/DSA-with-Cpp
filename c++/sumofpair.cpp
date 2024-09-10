#include <iostream>
using namespace std;
int main()
{

  int arr[] = {1, 3, 4, 5, 7, 8};
  int i = 0, n = 6, j = n - 1;
  int x = 12;
  int pair = 0;
  while (i < j)
  {
    if (arr[i] + arr[j] == x)
    {
      pair++;
    }
    else if (arr[i] + arr[j] < x)
    {
      i++;
    }

    else
      j--;
  }
  cout << pair << endl;
  return 0;
}