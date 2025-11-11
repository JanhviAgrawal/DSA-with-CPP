#include <iostream>
#include <vector>
using namespace std;

//Desending order
void selectionSort(vector<int> &a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int max_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[max_index] < a[j])
            {
                max_index = j;
            }
        }
        int temp = a[max_index];
        a[max_index] = a[i];
        a[i] = temp;
    }
}

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

    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        a[i + start] = temp[i];
    }
}

void mergeSort(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);

        merge(a, start, mid, end);
    }
}

int linearSearch(vector<int> a, int n)
{
    int search_element;
    cout << endl
         << "Enter Element to search: ";
    cin >> search_element;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (search_element == a[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

int binarySearch(vector<int> a, int start, int end, int target)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target < a[mid])
        {
            return binarySearch(a, start, mid - 1, target);
        }
        else if (target > a[mid])
        {
            return binarySearch(a, mid + 1, end, target);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}