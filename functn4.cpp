#include<iostream>
using namespace std;
int sub(int a, int b)
{
    return(a-b);
}
int main ()
 {
    int sum;
    sum = sub(100, 50);
    cout << "100 - 50 = " << sum << endl;
    return 0 ;
}