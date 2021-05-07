#include <stdio.h>
///  01_Cvicenie.pdf
int main() {
    /// elso feladat
    printf("Ahoj Studenti ALPRE!\n");


    ///második feladat
    int first,second,third;
    int objem, povrch;
    printf("Kérem adjon meg három számot: ");
    scanf("%d %d %d", &first, &second, &third);
    objem = first*second*third;
    povrch = (second*first*second) + (second*first*third)+ (second*second*third);
    printf("Objem: %d x %d x %d je %d \n", first, second,third, objem);
    printf("Povrch: %d x %d x %d + %d x %d x %d + %d x %d x %d je %d \n", second,first,second,second,first,third,second,second,third, povrch);

    /// Napíšte program na výpočet obvodu a obsahu kruhu. Vstupom je jeden riadok obsahujúci jedno
    ///reálne číslo predstavujúce polomer kruhu. Riadok je ukončený znakom konca riadku. Výstupom je
    ///jeden riadok obsahujúci správu: Kruh s polomerom r: obvod = o, obsah = s, kde r
    ///je polomer, o je vypočítaný obvod a s je vypočítaný obsah kruhu. Všetky reálne čísla na
    ///výstupe vypíšte na 2 desatinné miesta.
    float r, o, s;
    printf("Kérem adjon meg egy számot: ");
    scanf("%f", &r);
    o = 2*3.14*r;
    s = 3.14*(r*r);
    printf("A kerulet =  %.2f  és a terulet =  %.2f \n", o, s);


    /// irjunk programot három realis szam beolvasasara és annak az átlagát visszakapjuk
    float one,two,three, avg;
    printf("Kérem adjon meg három real számot: ");
    scanf("%f %f %f", &one, &two, &three);
    avg = (one+two+three)/3;
    printf("%.3f %.3f %.3f Eme három szám átlaga = %.3f\n", one, two,three, avg);


    /// beolvasunk egy számot és adunk rá adót, ami 20%
    int inputNumber;
    double outputNumber;
    printf("Kérem adja meg a számot: ");
    scanf("%d", &inputNumber);
    outputNumber = inputNumber*1.2;
    printf("Szam ado elott = %d\nA szám adó után %.2f!\n",inputNumber,outputNumber);


    /// bmi calculator
    float height, weight, bmi;
    printf("Kéterm adja meg a magasságát és a súlyát: ");
    scanf("%f %f", &height, &weight);
    height = height/100;
    bmi = (weight)/(height*height);
    printf("BMI: %.2f\n" , bmi);


    return 0;
}