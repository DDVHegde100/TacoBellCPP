#include <iostream>
#include <cmath>
using namespace std;

 
 
int
main ()
{
  
  int x;
  int y;
 
int cts;
  
int ct;
  
int sts;
  
int st;
  
int lnt;
  
int cgc;
  
 
cout << "Welcome to CPP Taco Bell!";
    cout <<"Enter 1 for Crunchy Taco Supreme. Enter 2 for Crunchy Taco. Enter 3 for Soft Taco Supreme. Enter 4 for Soft Taco. Enter 5 for Loaded Nacho Taco. Enter 6 for Cheesy Gordita Crunch.";
cin >> x;
  
 
if (x == 1)
    {

cout << "Please enter the amount of Tacos: ";
cin >> y;

cts = 1.79*y;
      
cout << "Your total will be " << cts;
cout << "  Thank You for visiting CPP Taco Bell." ;
return 0;
    
}

 
 
 
 
 
}
