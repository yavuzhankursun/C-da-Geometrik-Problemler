#pragma once
#include "nokta.h"

class Ucgen {
public:
    // Constructor (kurucu) fonksiyon
    Ucgen(Nokta a, Nokta b, Nokta c);

    // Getter fonksiyonları
    Nokta getA();
    Nokta getB();
    Nokta getC();

    // Setter fonksiyonları
    void setA(Nokta nokta);
    void setB(Nokta nokta);
    void setC(Nokta nokta);

    // Üçgenin bilgilerini string olarak döndüren fonksiyon
    string toString();
    double alan();
    double cevre();
    // Üçgenin iç açılarını dizi olarak döndüren fonksiyon
    double* acilar();

private:
    Nokta a;
    Nokta b;
    Nokta c;
};