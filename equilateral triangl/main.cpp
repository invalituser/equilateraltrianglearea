#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout << "Equilateral triangle area finder program\n Enter a: "; double a;
    cin >> a; double A; A = sqrt(3) * pow(a,2) / 4;
    cout << "\n A = " << A;
}