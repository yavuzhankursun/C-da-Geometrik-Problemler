#pragma once
#include <string>
using std::string;

class Nokta {
public:
    Nokta();
    Nokta(double xy); // x ve y'yi aynı değerle başlatır
    Nokta(double x, double y); // x ve y'yi ayrı ayrı başlattık
    Nokta(Nokta &nokta); // kopya oluşturan constructer
    Nokta(Nokta &nokta, double ofset_x, double ofset_y); // x ve y koordinalarınına ofset x ve y değişkenlerini ekler

    // X ve Y koordinatlarını döndürür
    double getX();
    double getY();

    // X ve Y koordinatlarını ayarlar
    void setX(double x);
    void setY(double y);
    void setXY(double x, double y);

    // özellikleri string olarak döndürdük
    string toString();
    void yazdir();

private:
    double x;
    double y;

};

