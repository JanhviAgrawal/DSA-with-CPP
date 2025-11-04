#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int start, int mid, int end)
{
    vector<int> temp;

    int i = start;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (a[i] <= a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }

    // remaining elements of left
    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }

    // remaining elements of right
    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    // elements from temp to array->a...
    for (int i = 0; i < temp.size(); i++)
    {
        a[i + start] = temp[i];
    }
}

void merge_sort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        merge_sort(a, start, mid);   // left
        merge_sort(a, mid + 1, end); // right

        merge(a, start, mid, end);
    }
}

int main()
{
    int n;
    cout << "Enter Number of elements: ";
    cin >> n;

    vector<int> a;

    cout << endl
         << "Enter Array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter a[" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    // cout << endl
    //      << "Array is: ";
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }

    merge_sort(a, 0, n - 1);

    cout << endl
         << "Sorted Array is: ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}