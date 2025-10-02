#include <iostream>
using namespace std;


  //problem1
 int product(int a, int b) {
     return a*b;
 }
 float product(float a, float b) {
     return a*b;
 }
  //problem2
 int acceleration(int v1, int v2, int t) {
     return (v2-v1)/t;
 }
 float acceleration(float v1, float v2, float t) {
     return (v2-v1)/t;
 }
  //problem3
  int fun(int R) {
 }



int main() {
     //problem1
     float x, y;
     cin>>x>>y;

     cout << product(x,y);
     cout << "\nrounded: " << product((int)x, (int)y);

     //problem2
     int c, d, e;
     cin>>c>>d>>e;

     cout << acceleration(c, d, e);
     cout<< "\nequal: " << acceleration((float)c, (float)d, (float)e);

 }
