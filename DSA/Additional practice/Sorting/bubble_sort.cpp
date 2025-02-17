#include <iostream>
using namespace std;

void bubble_Sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            cout << "Already sorted " << endl;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // Write your code here
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_Sort(arr, n);

    return 0;
}