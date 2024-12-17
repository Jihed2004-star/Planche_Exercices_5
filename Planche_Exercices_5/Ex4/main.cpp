#include <iostream>
#include "complexe.h"
using namespace std;

int main()
{
    complexe a(2.5,1.2);
    complexe b(2.5,1.2);
    a.afficher();
    complexe c = a+b;
    c.afficher();
    cout<<endl;
    c=a-b;
    c.afficher();
    cout<<endl;
    c=a*b;
    c.afficher();
    cout<<endl;
    c=c*2.1;
    c.afficher();
    cout<<endl;
    return 0;
}
