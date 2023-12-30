#include "ucgen.h"
#include "dogruParcasi.h"
#include "math.h"

Ucgen::Ucgen(Nokta a, Nokta b, Nokta c) {
    setA(a);
    setB(b);
    setC(c);
}

Nokta Ucgen::getA() {
    return this->a;
}

Nokta Ucgen::getB() {
    return this->b;
}

Nokta Ucgen::getC() {
    return this->c;
}

void Ucgen::setA(Nokta nokta) {
    this->a = nokta;
}

void Ucgen::setB(Nokta nokta) {
    this->b = nokta;
}

void Ucgen::setC(Nokta nokta) {
    this->c = nokta;
}

string Ucgen::toString() {
    return "üçgen; " + getA().toString() + "-" + getB().toString() + "-" + getC().toString();
}

double Ucgen::alan() {
    double a = getA().getX() * (getB().getY() - getC().getY()) +
               getB().getX() * (getC().getY() - getA().getY()) +
               getC().getX() * (getA().getY() - getB().getY());
    return 0.5 * std::abs(a);
}

double Ucgen::cevre() {
    double a = DogruParcasi(getA(), getB()).uzunluk();
    double b = DogruParcasi(getB(), getC()).uzunluk();
    double c = DogruParcasi(getC(), getA()).uzunluk();

    return a + b + c;
}

double *Ucgen::acilar() {
    double* dizi = new double[3];

    DogruParcasi dp1(getA(), getB());
    DogruParcasi dp2(getB(), getC());
    DogruParcasi dp3(getC(), getA());

    // Her açı için kosinüs teoremi
    dizi[0] = std::acos((dp2.uzunluk() * dp2.uzunluk() + dp3.uzunluk() * dp3.uzunluk() -
                              dp1.uzunluk() * dp1.uzunluk()) / (2 * dp2.uzunluk() * dp3.uzunluk()));
    dizi[1] = std::acos((dp3.uzunluk() * dp3.uzunluk() + dp1.uzunluk() * dp1.uzunluk() -
                              dp2.uzunluk() * dp2.uzunluk()) / (2 * dp3.uzunluk() * dp1.uzunluk()));
    dizi[2] = std::acos((dp1.uzunluk() * dp1.uzunluk() + dp2.uzunluk() * dp2.uzunluk() -
                              dp3.uzunluk() * dp3.uzunluk()) / (2 * dp1.uzunluk() * dp2.uzunluk()));

    // Açıları radyandan dereceye döndür.
    for (int i = 0; i < 3; ++i) {
        dizi[i] = dizi[i] * 180.0 / M_PI;
    }

    return dizi;
}