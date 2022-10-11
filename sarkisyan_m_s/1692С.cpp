#include <iostream>
#include <coniow.h>
 
using namespace std;
 
int main(){
int pole1x, pole1y, pole2x, pole2y;
bool pole1;
bool pole2;
 
cout << Rus("4");
cin >> pole1x;
cout << Rus("3");
cin >> pole1y;
cout << Rus("2");
cin >> pole2x;
cout << Rus("2");
cin >> pole2y;
 
if ((pole1x % 2 == 1 && pole1y %2 == 1) || (pole1x % 2 == 0 && pole1y % 2 == 0)){
     pole1 = true;
}else{
     pole1 = false;
}
if ((pole2x % 2 == 1 && pole2y %2 == 1) || (pole2x % 2 == 0 && pole2y % 2 == 0)){
     pole2 = true;
}else{
     pole2 = false;
}
if ((pole1 == true && pole2 == true) || (pole1 == false && pole2 == false)){
     cout << "YES" << endl;
}else{
     cout << "NO" << endl;
}
     _getch();
}
