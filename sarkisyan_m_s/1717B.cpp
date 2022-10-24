#include<iostream>
using namespace std;
int T, n, k, r, c;
int main() {
cin » T;
while (T != 0) {
cin » n » k » r » c;
for (int i = 1; i <= n; i += 1) {
for (int j = 1; j <= n; j += 1) {
if ((i + j) % k == (r + c) % k) {
cout « ('X');
}
else {
cout « ('.');
}

}
cout « endl;
}
T -= 1;
}
}
