#include <iostream>
#include <ctime>
#include <algorithm>
#include <cmath>
using namespace std;
double probability_of_survival (int months)
{
    
    double bad_isxod=1;
    if (months==1)
    {
        return 0;
    }
    if (months==2)
    {
        return 25;
    }
    
    int a=1;
    int b=1;
    for (int i = 2; i < months; i++)
    {
        bad_isxod=bad_isxod*2+a;
        a=a+b;
    }
    double veroyat=bad_isxod/(pow(2,months))*100;
    return veroyat;
}
int main()
{
    int months;
    cout<<"Enter a number: ";
    cin>>months;
    cout<<"The probability of survival is "<<probability_of_survival(months)<<" %"<<endl;
    return 0;
}