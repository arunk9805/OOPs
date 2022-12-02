#include <iostream>
using namespace std;
class complex{
int real, imag;
public:
void show() {
cout << real << " + " << imag << "i";
}
complex add(complex a) {
complex c;
c.real = real + a.real;
c.imag = imag + a.imag;
return c;
}
complex sub(complex a) {
complex c;
c.real = real - a.real;
c.imag = imag - a.imag;
return c;
}
complex mult(complex a) {
complex c;
c.real = real * a.real - imag * a.imag;
c.imag = real * a.imag + imag * a.real;
return c;
}
complex(){
real = imag = 0;
}
complex(int r, int i) : real(r), imag(i){}
complex(const complex &c) {
real = c.real;
imag = c.imag;
}
};
int main() {
complex c1(3, 2), c2(2, 1);
complex cAdd(c1.add(c2)), cSub(c1.sub(c2)), cMult(c1.mult(c2));
cout << "C1: "; c1.show();
cout << "\nC2: "; c2.show();
cout << "\ncAdd: "; cAdd.show();
cout << "\ncSub: "; cSub.show();
cout << "\nsMult: "; cMult.show();
return 0;
}