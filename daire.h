#pragma once
#include "nokta.h"

class Daire {
public:
    // Merkez ve yarıçap kullanılarak çağrılan constructor (kurucu) fonksiyon
    Daire(Nokta merkez, double yaricap);
    // Başka bir daire kopyalanarak çağrılan constructor (kurucu) fonksiyon
    Daire(Daire &daire);
    // Merkez ve bir x sayısı kullanılarak çağrılan constructor (kurucu) fonksiyon
    // Yarıçapı x katına çıkarır
    Daire(Daire &daire, int x);

    // Getter fonksiyonları
    Nokta getMerkez();
    double getYaricap();

    // Setter fonksiyonları
    void setMerkez(Nokta nokta);
    void setYaricap(double yaricap);

    double alan();
    double cevre();
    // Dairelerin kesişim durumunu döndüren fonksiyon
    int kesisim(Daire daire);
    // Dairenin bilgilerini string olarak döndüren fonksiyon.
    string toString();
    // Dairenin bilgilerini yazdıran fonksiyon.
    void yazdir();

private:
    Nokta merkez;
    double yaricap;
};