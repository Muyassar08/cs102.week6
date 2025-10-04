#include <iostream>
#include <string>
#include <cmath>
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
float fun(float r) {
   cout<<2*3.14*r<<endl;
   cout<<3.14*r*r<<endl;
   return 0;
 }
  //problem4
float perimeter(float a, float b) {
         return a*b;
 }
      int perimeter(int a,int b) {
     return 2*(a + b);
 }
   //problem5
int swap(int a,int b) {
          int d;
          d=a+b;
         a=d-a;
         b=d-b;
          cout<<a<<" "<<b<<endl;
 }
   //problem6
 int factorial(int a=1) {
    return a;
 }
   //problem7
    int gcd (int a,int b){
         if (b==0){
             return a;
          }
          else {
             return gcd(b,a%b);
         }
 }
   //problem8
int maxim (int a,int b,int c){
         if (a>=b and a>=c){return a;}
          else if (b>=c and b>=a){return b;}
         else if(c>=b and c>=a){return c;}
         return 0;
 }
   //problem9
int sum (int a , int b) {
     return a+b;
 }

     int subtract (int a , int b) {
     return a-b;
 }
      int products (int a , int b) {
return a*b;
      }
      int division (int a , int b){
         return a/b;
 }
   //problem10
   int trianglenumbers(int n=72){
     for(int i=1;i<=72;i++){
        cout<<(i)*((i)+1)/2<<" ";
        if(i%5==0){
            cout<<endl;
        }
     }
     return 00;
 }
   //problem11
void displayEven(int n){
     string st=to_string(n);
         for (int i=0;i<= size(st);i++){

          if(char(st[i])%2==0 && char(st[i])%2!=48){
               cout<<st[i];
           }
         }
 }
   //problem12
  void isArmstrong(int sum,int num){
     if (sum==num){
         cout <<"armstrong";
     }
     else cout <<"it is not armstrong";
 }

 int cubeOfDigits(int n){
     string st=to_string(n);
     int d,sum=0;
     for (int i=0;i<size(st);i++){
      d =char(st[i])-48;
       sum+=pow(d,3);
     }
     return sum;
 }
  //problem13
int numberOfDaysInFebruary(int year) {
     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
         return 29;  // Leap year
         }
         else {
             return 28;  // Normal year
          }
      }
     //problem14
     double fiv(double amt, double mir, int yrs) {
         return amt * pow(1 + mir, yrs * 12);
      }
     //problem15
     void printASCII(char f,char s ){
     int d=1;
     for (int i=int(f);i<=int(s);i++){
         cout << char(i)<<" ";
         if(d%5==0){cout <<endl;}d++;
     }

 }
     //problem16
     void printMatrix( int f ){
          for (int i=0 ; i<=f; i++){
              for(int j=0; j<=f;j++){
                  cout << j<< " ";
              }cout << endl;
          }

      }
     //problem17
     void sorted( double a,double b, double c ){
          double arr[]={a,b,c};

           for (int i = 0; i < 3 - 1; i++) {
              for (int j = 0; j < 3 - i - 1; j++) {
                  if (arr[j] > arr[j + 1]) {
                      // swap
                      int temp = arr[j];
                      arr[j] = arr[j + 1];
                      arr[j + 1] = temp;
                  }
              }

           }
             for (int i = 0; i < 3; i++) cout << arr[i] << " ";
         cout << endl;

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

     //problem3
     float rad;
     cin >> rad;
     fun(rad);

     //problem4
     int a,b;
     cin>>a>>b;
     cout<<perimeter(a,b)<<endl;
     cout<<perimeter((float)a, (float)b)<<endl;

     //problem5
     int l,k;
     cin>>l>>k;
     swap(l,k);

     //problem6
     cout<<factorial();

     //problem7
     long long int h,g;
     cin>>a>>b;
     cout <<"gcd is "<<gcd(a,b);

     //problem8
     long long int p,o,u;
     cin>>a>>b>>c;
     cout <<"max num is "<<maxim(a,b,c);

    //problem9
    long long int f , j;
      cout <<" input 2 number \n";
     cin>>a >>b;
       cout<<"sum "<<sum(a,b)<<"\n";
       cout<<"subtract "<<subtract(a,b)<<"\n";
       cout<<"products "<<product(a,b)<<"\n";
       cout<<"division "<<division(a,b)<<"\n";

    //problem10
     trianglenumbers();

    //problem11
          int n;
          cout <<"input integer ";
          cin>>n;
         displayEven(n);

    //problem12
          int s;
          cout <<"input integer ";
          cin>>s;
          isArmstrong(cubeOfDigits(s),s);

    //problem13
     cout << "Year   Days in February" << endl;
     cout << "-----------------------" << endl;

     for (int year = 1985; year <= 1993; year++) {
         cout << year << "    " << numberOfDaysInFebruary(year) << endl;
     }

    //problem14
          double amt, air;
          int yrs;

          cout << "Amount: ";
          cin >> amt;

          cout << "Annual rate (%): ";
         cin >> air;

          cout << "Years: ";
          cin >> yrs;

          double mir = air / 1200;
          double fv = fiv(amt, mir, yrs);

          cout << "Future value: " << fv << endl;

     //problem15
     char z,v;
     cout << "input 2 characters ";
     cin>>z>>v;
     printASCII(z,v);

    //problem16
          int m;
          cout << "input 2 characters ";
          cin >> m;
          printMatrix(m);

     //problem17
          double w,q,r;
          cout << "input 3 mumb ";
          cin >>w>> q >>r ;
          sorted(a,b,c);
          return 0;
      }
























