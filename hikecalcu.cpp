#include <iostream>
using namespace std;

int main()
{
    float X=25000, Y=10, in, ttl;
    int yr=20;
    cout << "1st year = " <<X << endl;
    
    for(int i = 1; i <= yr; i++){
        in = X * 0.1; 
        X += in;
        cout << i+1<< "th year = " << X << endl;
    }
    
    return 0;
} 