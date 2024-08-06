#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s;
    int sum=0 ,summ=0;
    cin >> s;
    for(char a : s)
    {
        if('0'<=a&&a<='9')
        {
            sum= sum*10+a-'0';
        }
    }
    cin >> s;
    for(char a : s)
    {
        if('0'<=a&&a<='9')
        {
            summ= summ*10+a-'0';
        }
    }

    cout << sum+summ;
    return 0;
}