//Tomasz Kontek 160553
/*8. W programie asemblerowym zdefiniowano format
32-bitowych liczb mieszanych bez znaku, przyjmuj�c,
�e najmniej znacz�cy bit ma wag� 2^(-7)
a kolejne maj� wag� 2 razy wi�ksz�
Napisa� fragment programu w asemblerze, kt�ry
wpisze 1 do znacznika CF (rozkaz STC) je�li cz��
ca�kowita liczby zawartej w rejestrze EBX jest r�na
od zera; w przeciwnym razie CF powinien zosta�
wyzerowany (rozkaz CLC). 
#include <stdio.h>

extern int funkcja(unsigned int a);
int main() {

	parametr = 0x000F;

	parametr = 0x0070;

	parametr = 0x0080;

	parametr = 0xA0BC;

	getchar();
	return 0;
}