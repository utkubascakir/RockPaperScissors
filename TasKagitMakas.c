#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char pc_hamle[3] = {0, 1, 2};
    char devam;
    
    int i;
    char islemno;
    int islemno_pc;
    int skor=0, skor_pc=0;
    
    printf("Tas, Kagit, Makas oyununa hosgeldin!\n3 olan kazanir.\n\n");
    
    for (;;) {
    	
		while (skor != 3 && skor_pc != 3) {

    	printf("1-Tas\n2-Kagit\n3-Makas\nYapacaginiz hamleyi seciniz: ");

		islemno = getche();
		srand(time(0));
		
		printf("\n\n");
		
		if (islemno == '1' || islemno == '2' || islemno == '3') {
			if (islemno == '1') {
            	printf("\nSenin Hamlen Tas!\n");
            	printf("   _______\n");
    			printf("---'   ____)\n");
    			printf("      (_____)\n");
    			printf("      (_____)\n");
    			printf("      (____)\n");
    			printf("---.__(___)\n\n");
    		}
        	else if (islemno == '2') {
            	printf("\nSenin Hamlen Kagit!\n");
        	    printf("    _______\n");
    			printf("---'    ____)____\n");
    			printf("           ______)\n");
    			printf("          _______)\n");
    			printf("         _______)\n");
    			printf("---.__________)\n\n");
    		}
    		else if (islemno == '3') {
            	printf("\nSenin Hamlen Makas!\n");
            	printf("     _______\n");
    			printf("---'   ____)____\n");
    			printf("            ______)\n");
    			printf("         __________)\n");
    			printf("        (____)\n");
    			printf("---.__(___)\n\n");
			}
			
			islemno_pc = rand()%3+1;
			
			switch (islemno_pc) {
    		case 1:
            	printf("\nBilgisayarin Hamlesi Tas!\n");
            	printf("   _______\n");
    			printf("---'   ____)\n");
    			printf("      (_____)\n");
    			printf("      (_____)\n");
    			printf("      (____)\n");
    			printf("---.__(___)\n\n");
            	break;
        	case 2:
            	printf("\nBilgisayarin Hamlesi Kagit!\n");
            	printf("    _______\n");
    			printf("---'    ____)____\n");
    			printf("           ______)\n");
    			printf("          _______)\n");
    			printf("         _______)\n");
    			printf("---.__________)\n\n");
            	break;
        	case 3:
            	printf("\nBilgisayarin Hamlesi Makas!\n");
            	printf("     _______\n");
    			printf("---'   ____)____\n");
    			printf("            ______)\n");
    			printf("         __________)\n");
    			printf("        (____)\n");
    			printf("---.__(___)\n\n");
            	break;
        	default:
            	printf("\nGecersiz bir secim yaptiniz.\n");
            	break;
    		}
    		if (islemno == '1') {
    			if (islemno_pc == 1) {
    				printf("Berabere!\n\n");
				}
				else if (islemno_pc == 2) {
					printf("Bilgisayar Kazandi!\n\n");
					skor_pc++;
				}
				else if (islemno_pc == 3) {
					printf("Sen kazandin!\n\n");
					skor++;
				}
			}
			if (islemno == '2') {
    			if (islemno_pc == 2) {
    				printf("Berabere!\n\n");
				}
				else if (islemno_pc == 3) {
					printf("Bilgisayar Kazandi!\n\n");
					skor_pc++;
				}
				else if (islemno_pc == 1) {
					printf("Sen kazandin!\n\n");
					skor++;
				}
			}
			if (islemno == '3') {
    			if (islemno_pc == 3) {
    				printf("Berabere!\n\n");
				}
				else if (islemno_pc == 1) {
					printf("Bilgisayar Kazandi!\n\n");
					skor_pc++;
				}	
				else if (islemno_pc == 2) {
					printf("Sen kazandin!\n\n");
					skor++;
				}
			}
			printf("Sen: %8d\nBilgisayar: %d\n\n", skor, skor_pc);
			
			if (skor==3) printf("\n-OYUNU KAZANDIN-\n\n");
			if (skor_pc==3) printf("\n-OYUNU KAYBETTIN-\n\n");
			printf("Devam etmek icin SPACE tusuna basin.");
			
			devam = getche();
			
			if (devam == ' ') {
				system("CLS");
			}
		}
		else {
			printf("Gecersiz hamle!\n\n");
			system("CLS");
		}
	}

	skor = 0;
	skor_pc=0;
	
	}
	system("pause");
	return 0;
}