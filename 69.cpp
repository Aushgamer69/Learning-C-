#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 32, 43, 35, 21, 37};
    sort(arr, arr + 5);
    for (int i = 0; i < 6; i++)
    {

        cout << arr[i];
    }

    return 0;
}