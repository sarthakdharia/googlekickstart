#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n, m;
        cin >> n >> m;
        int arr[n + 1], temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (arr[i] > arr[j + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }


        
        cout << "Case #" << i + 1 << ": " << r << endl;
    }

    return 0;
}