#include <iostream>
using namespace std;

int main() {
    int first, sec, num;
    cin >> num >> first;

    int min=9999999;
    for(int i=1; i<num;i++)
    {
        sec = first;
        cin >> first;
        if(first - sec < min)
            min = first - sec;
    }
    cout << min;

    return 0;
}