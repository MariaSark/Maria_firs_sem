#include <iostream>
using namespace std;
int main() {
int a = 0, n = 0, m = 0, sx = 0, sy = 0, d = 0;
cin » a;
for (int i = 0; i < a; i += 1) {
cin » n » m » sx » sy » d;
if ((sy - d) > 1 && (sx + d) < n) {
cout « (n + m) - 2 « endl;
}
else if ((sy + d) < m && (sx - d) > 1) {
cout « (n + m) - 2 « endl;
}
else {
cout « "-1" « endl;
}
}
}
