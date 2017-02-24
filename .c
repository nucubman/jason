bituri operaciebi  ! ! !
int a = 60;  0011 1100
int b = 13;  0000 1101  
int c = a&b;es & aris bituri 1 cali rocaa! anu a - sa da b- s jami 16 obitshi udris 12s! 
c = a|b;  am shemtxvevashi aris "an" , anu sxvanairad ikribeba teqsvmetobiti da sxva pasuxs vigebt ! anu an shi 1 sa da 0 is jami aris 1 da & shi aris 0!
SHIFT - anu chaweva marjvniv da marcxniv ramdeni < ic an > ic gviweria imdenit wevs am baitebs marjvin an marcxniv!
a << 2; 11 11 0000
a >> 2; 0000 1111 1 poziciit chaweva aris 2 ze gayofis tolfasi

& = shemtxveashi 1 s vigebt mxolod 1 sa da 1 is jamit!
^ - qsoris shemxtvevashi 1 s vigebt mxolod 0 sa da 1 is an 1 isa da 0 is jamit! 1+1 = 0; 0+0=0; es qsorshi!
c = a ^ b; 0011 0001

~ - flip! abrunebs baitebs anu anacvlebs ertmanetshi horizontalurad!
  
10000000 = 128;
01000000 = 64; >> chavwiet marjvniv!
00100000 = 32;
00010000 = 16;

baitis shemtxvevashi atvla iwyeba marjvnidan marcxniv!

main(){
	srand(time(NULL));
	int n = 128;
	int i = 7;
	int r = rand() % 128;

	while ((n&r) == 0) {
		n >>= 1;
		i--;

	}
	printf("random number = %d , position = %d ",r, i);
	
	getchar();
}

mocemul ricxvebshi umaglesi baitis povna anu imis povna roca 1 emtxveva 1 s da vigebt erts imitom rom chven vitvlit & it da am shemtxvevashi mxolod 1 da 1 ia 1 is toli!
  pasuxi iqneba! anu >> - vshiftavt iqamde sadamdec 1 iani 1 s ar dametxveva da 00111100 00001101! qveshmiwerit shekrebisas 1 - 1s tu ar dametxva pasuxi iqneba false
  
	
	HINT : structuris zoma arasodes ar icvleba! NEVER!
		
		
tu 64 bitiani arqiteqturaa pointeri gaizrdeba 8 baitis xarjze!
tu 32 bitiani arqiteqturaa pointeri gaizrdeba 4 baitis xarjze!		
  

VOID - ar gaachnia return type! 
		
char tipshi sul eteva 256 simbolo an ricxvi! 



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
	int a = 60;
	int i = 0;
	int c = 1;
	int r = rand() % 100;
	printf("random: %d ", r);
	for (i = 0; i < 8; i++) {
		if ((r&a) ==  0)  {
			printf("*");
		}
		else {
			printf("  __  ");

		}
		a >>= 1;
  }
	getchar();
}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>
#include <Windows.h>

main() {	
	unsigned int a = rand()%128;	

	int c = 0;

	for (int i = 7; i >= 0; i--) {
		if ((a & 1<<i) == 1 << i) {
			printf("*");
		} else {
			printf("_");
		}
	}

	getchar();
} // es da zeda davaleba erti da igivea!///////////////////////////////////////////////////////////////////////////////////////////////////






















































