#include <iostream>
int main()
{
int n=0;
std::cin»n;
int k=0;
std::cin»k;

int t=0;
std::cin»t;
int f=0;
std::cin»f;

int p=0;
p =f-(t-k);
int pMax = p;

for (int i=0; i < n-1; i += 1) {
std::cin»t;
std::cin»f;
p =f-(t-k);
if (pMax<p){
pMax = p;
}
}

std::cout « p;
}
