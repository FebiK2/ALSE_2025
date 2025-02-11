#include <iostream>
int main(){
    int x, y;
    int aux;
    float height = 1.78;
    double pi = 3.1416;
    char character = 'a';
    bool isStudent = true;

    std:: cin >> x >> y;
    aux = x;
    x = y;
    y = aux;
   std:: cout << x << y << "\n";

    //print initialied variables
    /*
    Comentario
    de
    más
    de
    una
    linea*/
    std::cout << "Height:\t " << height << std::endl;
    std::cout << "Pi:\t " << pi << std::endl;
    std::cout << "Character:\t " << character << std::endl;
    std::cout << "Is student:\t " << isStudent << "\n";

    short s = 100;
    //unsigned modifier to use positive values only
    unsigned short us = 200;
    long l = 300;
    long long ll = 40000000000000000LL;
    unsigned long ul = 500;
    
return 0;
}
