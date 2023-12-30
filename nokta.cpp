#include "nokta.h"
#include <iostream>

Nokta::Nokta() { // Nokta classının default(parametresiz) constructerını ekledik
    setXY(0,0); // setXY fonksiyonu ile iki değeri de 0 a eşitledik
}

Nokta::Nokta(double xy) { // Tek parametresi constructerı ile x ve y'yi aynı değere eşitledik
    setXY(xy,xy);
}

Nokta::Nokta(double x, double y) { // İki parametreli constructer ile x ve y'yi belirtilen değerlere ayarladık
    setXY(x, y);
}

Nokta::Nokta(Nokta &nokta) { // Nokta nesnesinin kopyasını oluşturduk
    setXY(nokta.getX(), nokta.getY());
}
//  Ofset fonksiyonu ile nokta koordinatlarımızın üzerine ofset değerleri eklenir.
Nokta::Nokta(Nokta &nokta, double ofset_x, double ofset_y) {
    setXY(nokta.getX() + ofset_x, nokta.getY() + ofset_y);
}

// X ve Y koordinatlarını döndürdük

double Nokta::getX() {
    return this->x;
}

double Nokta::getY() {
    return this->y;
}

// X ve Y koordinatlarını ayarladık

void Nokta::setX(double x) {
    this->x = x;
}

void Nokta::setY(double y) {
    this->y = y;
}

void Nokta::setXY(double x, double y) {
    setX(x);
    setY(y);
}
// Noktanın X ve Y koordinatlarını içeren bir string dördürdük
string Nokta::toString() {
    return "(" + std::to_string(getX()) + "," + std::to_string(getY()) + ")";
}

// Noktanın X ve Y koordinatlarını ekrana yazdırdık.
void Nokta::yazdir() {
    std::cout << toString() << std::endl;
}


