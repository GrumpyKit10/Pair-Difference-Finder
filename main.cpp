#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

void findPair(int arr[], int n, int diff);

int main()
{
    int array[] = { 1, 5, 2, 2, 2, 5, 5, 4};//input
    int N = -3;// negative of difference
 
    int size = sizeof(array) / sizeof(array[0]);// size of array
 
    findPair(array, size, N); // call find pair function 
 
    return 0;
}

void findPair(int arr[], int n, int diff)
{
    sort(arr, arr + n);//sort array
 
    unordered_set<int> set;// empty set
 
    for (int i = 0; i < n; i++)
    {
        while (i+1 < n && arr[i] == arr[i+1]) //handles duplicates
		{
            i++;
        }
 
        if (set.find(arr[i] - diff) != set.end()) //check pair with diff
		{
            cout << "(" << arr[i] << ", " << arr[i] - diff << ")\n";
        }
 
        if (set.find(arr[i] + diff) != set.end())//check pair with diff
		{
            cout << "(" << arr[i] + diff << ", " << arr[i] << ")\n";
        }
 
        set.insert(arr[i]);//insert into set
    }
}
 