#include "dogruParcasi.h"
#include <iostream>
#include <cmath>
DogruParcasi::DogruParcasi(Nokta a, Nokta b) {
    setA(a); // Başlangıç noktasını ayarladık
    setB(b); // Bitiş noktasını ayarladık
}

DogruParcasi::DogruParcasi(DogruParcasi &dogruParcasi) {
    setA(dogruParcasi.getA()); // Nesnenin Başlangıç noktasını kopyaladık
    setB(dogruParcasi.getB()); // Nesnenin Bitiş noktasını kopyaladık
}
// OrtaNokta uzunluk ve eğim ile doğruparçası nesnesi oluşturan constructer
DogruParcasi::DogruParcasi(Nokta ortaNokta, double uzunluk, double egim) {
    // DogruParcasi'nın başlangıç ve bitiş noktalarını hesapladık
    double mesafeX = uzunluk / (2 * sqrt(1 + pow(egim, 2)));
    double mesafeY = egim * mesafeX;

    setA(Nokta(ortaNokta.getX() - mesafeX, ortaNokta.getY() - mesafeY));
    setB(Nokta(ortaNokta.getX() + mesafeX, ortaNokta.getY() + mesafeY));
}

Nokta DogruParcasi::getA() {
    return this->a;
}

Nokta DogruParcasi::getB() {
    return this->b;
}

void DogruParcasi::setA(Nokta nokta) {
    this->a = nokta;
}

void DogruParcasi::setB(Nokta nokta) {
    this->b = nokta;
}
// Doğru parçasının uzunluğunu hesapladık
double DogruParcasi::uzunluk() {
    return sqrt(pow(getB().getX() - getA().getX(), 2) + pow(getB().getY() - getA().getY(), 2));
}
// Verilen nokta ile kesişim noktasını bulan fonksiyon
Nokta DogruParcasi::kesisimNoktasi(Nokta nokta) {
    double egim = (getB().getY() - getA().getY()) / (getB().getX() - getA().getX());

    double x = (nokta.getY() - getA().getY()) / egim;

    double y = egim * x + getA().getY();

    return Nokta(x, y);
}
// DogruParcasi'nin orta noktasını döndüren fonksiyon
Nokta DogruParcasi::ortaNokta() {
    return Nokta((getA().getX() + getB().getX()) / 2, (getA().getY() + getB().getY()) / 2);
}
// DogruParcasi'nin özelliklerini içeren bir string döndüren fonksiyon
string DogruParcasi::toString() {
    return getA().toString() + "-" + getB().toString();
}
// Doğru parçasının özelliklerini yazdırdık
void DogruParcasi::yazdir() {
    std::cout << toString() << std::endl;
}


