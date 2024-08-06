#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int sum=0;
    int temp;
    int num;
    cin >> num;
    for(int i=0; i<num;i++)
    {
        cin >> temp;
        sum+=temp;
    }
    char a[999];
    int i=1;
    while(sum>0)
    {
        a[i] = sum%10 + '0';
        sum/=10;
        i++;
    }
    i--;
    for(int j=i-1; j>=1;j--)
    {
        cout << a[j];
    }
    cout << a[i];
    return 0;
}