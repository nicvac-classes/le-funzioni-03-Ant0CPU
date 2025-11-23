#include <iostream>
#include <cmath>
using namespace std;

int calcolaArea (float r ) {
    float a;

    a=M_PI*r*r;

    return a;
}

int calcolaCirconferenza (float r) {
    float c;

    c=2*M_PI*r;

    return c;
}


int main() {
    float r1, r2, c1, a1, c2, a2;

    cout<<"I Raggio"<<endl;
    cin>>r1;

    cout<<"II Raggio"<<endl;
    cin>>r2;

    c1=calcolaCirconferenza(r1);
    a1=calcolaArea(r1);
    cout<<"I Raggio: circonferenza="<<c1<<"; area="<<a1<<endl;

    c2=calcolaCirconferenza(r2);
    a2=calcolaArea(r2);
    cout<<"II Raggio: circonferenza="<<c2<<"; area="<<a2<<endl;

    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
