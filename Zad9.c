//Tomasz Kontek 160553
/*9. W programie zdefiniowano format 32-bitowych
liczb mieszanych w kodzie U2 przyjmuj�c, �e
najmniej znacz�cy bit ma wag� 2^(-7) // (kolejne 2^ (-6) itd. a� do 2^23) a najstarszy bit  to bit znaku 
Przyjmuj�c, �e liczba w podanym formacie znajduje
si� w rejestrze EDX, napisa� fragment programu,
kt�ry zaokr�gli t� liczb� do najbli�szej liczby
ca�kowitej. Wynik nale�y pozostawi� r�wnie� w
rejestrze EDX w podanym formacie.
Wskaz�wka: zbada� stan bitu o wadze 2-1. 
#include <stdio.h>

extern int funkcja(int a);

int main() {

	parametr = 0x00000000;

	parametr = 0x0000004F;

	parametr = 0x0000025C; 

	parametr = 0x000002D0;

	parametr = 0xA0BC;

	getchar();
	return 0;
}