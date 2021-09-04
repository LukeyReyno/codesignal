#include <vector>

using namespace std;

void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}

void transpose(vector<vector<int>> &a, unsigned n)
{
   for (unsigned row = 0; row < n; row++)
   {
      // col = row so they don't swap multiple times
      for (unsigned col = row; col < n; col++)
         swap(a[row][col], a[col][row]);
   }
}

void inverse(vector<vector<int>> &a, unsigned n)
{
   for (unsigned col = 0; col < (n / 2); col++)
   {
      for (unsigned row = 0; row < n; row++)
         swap(a[row][col], a[row][n - col - 1]);
   }
}

// Rotate the image by 90 degrees (clockwise).
vector<vector<int>> rotateImage(vector<vector<int>> a)
{
   unsigned n = a.size();
   transpose(a, n);
   inverse(a, n);

   return a;
}
