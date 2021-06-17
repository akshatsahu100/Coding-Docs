#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> vec, int target)
{
    int s = 0, e = vec.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (vec[mid] > target)
            e = mid - 1;
        else if (vec[mid] < target)
            s = mid + 1;
        else
            return true;
    }

    return false;
};

int main()
{
    int target;
    cin >> target;
    vector<int> vec(10);
    for (int i = 0; i < vec.size(); i++)
        cin >> vec[i];

    bool found = binary_search(vec.begin(), vec.end(), target);

    cout << found;

    bool ffound = binarySearch(vec, target);
    cout << " " << ffound;
}