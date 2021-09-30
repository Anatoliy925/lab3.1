#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double x, y, A, B;
    
    cout  << "x = "; cin >> x;
    
    A = x*x + sin(4*x/3);
    
    if(x < -5)
        B = 1/tan(x);
    if(x >= -5 && x <= 0)
        B = 4 - x*x/2;
    if(x > 0)
        B = log10(x*x) - 4*x/3;
    
    y = A + B;
           cout << endl;
           cout << "1) y = " << y << endl;
    if(x < -5)
        B = 1/tan(x);
        else
            if(x > 0)
                B = log10(x*x) - 4*x/3;
                else
                    B = 4 - x*x/2;
    y = A + B;
           cout << "2) y = " << y << endl;
    
    return 0;
        
}

