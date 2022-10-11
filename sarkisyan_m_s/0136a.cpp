// Example program
#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> t;
        a[--t] = i + 1;
    }
    for(auto i: a)
        cout << i << " ";
    return 0;
}
