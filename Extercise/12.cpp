#include<bits/stdc++.h>
using namespace std;
int main()
{
 
int N;
cin >> N;

int year = N/365;

int result = N%365;

int month = result/30;

int days = result%30;

cout << year <<" years, " << endl << month<< " month, " << endl << days <<" days" << endl;;





    
    return 0;
}