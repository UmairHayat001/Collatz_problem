#include <iostream>
using namespace std;
#include <unordered_map>
//the 3n+1 problem, the following algorithm generates a sequence of numbers. Start from n and divide by 2 if even and if odd 3n+1,
// the from range i to j, calculate maximum cycle lenght over all numbers including endpoints


int getMaxNumbers_CollatzSeries_Iterative(int i_th, int j_th)
{
    int maxNumbers = 0;
    for (int i = i_th;i <= j_th;i++)
    {
        int count = 1;
        int temp = i;
        while (temp != 1)
        {
            if ((temp & 1) == 1)  // odd scenario
                temp = temp * 3 + 1;
            else                  // even case
                temp /= 2;
            count++;
        }
        maxNumbers = max(count, maxNumbers);
    }
    return maxNumbers;
}
//Optimized method
unordered_map<int, int> map;           // To avoid redundant calculations
int collatzSeries(int n)
{
    if (n == 1) return 1;
    if (map.count(n)) return map[n];
    long long next = 1;                   // to avoid overflow issue
    if (n & 1)
        next = n * 3 + 1;
    else
        next = n / 2;
    map[n] = 1 + collatzSeries(next);
    return map[n];
}
int getMaxNumbers_CollatzSeries(int i_th, int j_th)
{
    int maxNumbers = 0;
    for (int i = i_th;i <= j_th;i++)
    {
        int numbers = collatzSeries(i);
        maxNumbers = max(numbers, maxNumbers);
    }
    return maxNumbers;
}




int main()
{
    cout << getMaxNumbers_CollatzSeries_Iterative(1, 10) << "\n";                     //iterative
    cout << getMaxNumbers_CollatzSeries(1, 10) << "\n";                       //recursion
    return 0;
}