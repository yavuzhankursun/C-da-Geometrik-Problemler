#pragma once
#include "nokta.h"

class DogruParcasi {
public:
    DogruParcasi(Nokta a, Nokta b); // iki adet nokta ile Doğru parçası nesnesi oluşturduk
    DogruParcasi(DogruParcasi &dogruParcasi); // Kopyasını oluşturan constructer ile bi kopyasını aldık
    // Orta nokta uzunluk ve eğim ile doğru parçası nesnesini oluşturduk
    DogruParcasi(Nokta ortaNokta, double uzunluk, double egim);

    // a ve b noktalarını döndürdük
    Nokta getA();
    Nokta getB();

    // a ve b noktalarını ayarladık
    void setA(Nokta nokta);
    void setB(Nokta nokta);

    double uzunluk();
    // Verilen nokta ile Dogru parçalarının keşisim noktalarını bulan fonksiyon
    Nokta kesisimNoktasi(Nokta nokta);
    Nokta ortaNokta();
    // Doğru parçasının özelliklerini yazdırdık
    string toString();

    void yazdir();

private:
    Nokta a;
    Nokta b;
};