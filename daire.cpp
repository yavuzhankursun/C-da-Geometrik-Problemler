#include "daire.h"
#include <cmath>
#include <iostream>

using namespace std;
Daire::Daire(Nokta merkez, double yaricap) {
    setMerkez(merkez);
    setYaricap(yaricap);
}

Daire::Daire(Daire &daire) {
    setMerkez(daire.getMerkez());
    setYaricap(daire.getYaricap());
}

Daire::Daire(Daire &daire, int x) {
    setMerkez(daire.getMerkez());
    setYaricap(daire.getYaricap() * x);
}

Nokta Daire::getMerkez() {
    return this->merkez;
}

double Daire::getYaricap() {
    return this->yaricap;
}

void Daire::setMerkez(Nokta nokta) {
    this->merkez = nokta;
}

void Daire::setYaricap(double yaricap) {
    this->yaricap = yaricap;
}

double Daire::alan() {
    return M_PI * pow(getYaricap(),2);
}

double Daire::cevre() {
    return 2 * M_PI * getYaricap();
}

// 0: verilen daire dairenin içinde
// 1: verilen daire ve daire örtüşüyor
// 2: verilen daire ile bir kesişim veya örtüşme yok
int Daire::kesisim(Daire daire) {
    if (
            daire.getYaricap() < getYaricap() &&
            daire.getMerkez().getX() < getMerkez().getX() &&
            daire.getMerkez().getY() < getMerkez().getY()
            ) {
        return 0;
    } else if (
            daire.getYaricap() == getYaricap() &&
            daire.getMerkez().getX() == getMerkez().getX() &&
            daire.getMerkez().getY() == getMerkez().getY()
            ) {
        return 1;
    } else {
        return 2;
    }
}

string Daire::toString() {
    return getMerkez().toString() + "-" + std::to_string(getYaricap());
}

void Daire::yazdir() {
    std::cout << toString() << std::endl;
}