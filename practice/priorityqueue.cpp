#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(4);
    maxi.push(2);
    maxi.push(7);
    maxi.push(3);
    int n = maxi.size();
    for(int i = 0; i < n; i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }
    return 0 ;
}