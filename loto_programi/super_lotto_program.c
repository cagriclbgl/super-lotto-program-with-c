#include <stdio.h>
#include <stdlib.h>

int main()
{
   int loto[6],tahmin[6];
   int dogruSayisi=0;
   int seed;
   printf("Seed gir = ");//rasgele sayý üreticisi için besleme(seed) deðeri kullanýcýdan alýnýr.
        scanf("%d" , &seed);
        srand(seed);
   while(1){

     printf("\tANA MENU\n1. Super Loto (6/54) Oynama\n2. Istatistikleri Goruntuleme\n3. Cikis ");//Menüyü kullanýcýya gösterir.

     int sec;
     printf("\nLutfen yapmak istediginiz islemi seciniz = ");
     scanf("%d",&sec);
     switch(sec)
     {
     case 1:
while (1) {
          for(int i=0;i<6;i++)
        {
            int random=rand()%54+1;
            loto[i]=random;

        }


        for(int i=0;i<6;i++)
        {
            printf("%d. tahmininizi giriniz = ",i+1);
            scanf("%d",&tahmin[i]);

            for (int n = 0; n < 6; n++) {
                if (loto[n] == tahmin[i]) {
                    dogruSayisi++;
                }
            }



        }
                for(int i=0;i<6;i++)
        {
            printf("%d ",tahmin[i]);


        }
            printf("\n");

            for(int i=0;i<6;i++)
        {
            printf("%d ",loto[i]);


        }
            printf("\n");

            printf("Tutturdugunuz sayi miktari = %d \n " , dogruSayisi);
            int puan=0;
            switch(dogruSayisi){
        case 3:
            puan=1;
            break;
        case 4:
            puan=3;
            break;
        case 5:
            puan=10;
            break;
        case 6:
            puan=50;
            break;

            }

        char secim;
        printf("Yeniden oynamak ister misiniz? (E: Evet,H: Hayir) = ");
        scanf(" %c",&secim);
        if(secim == 'H' || secim == 'h')
        {
            break;
        }
       else if(secim == 'E' || secim == 'e')
        {
            continue;
        }
        else {
            printf("Hatali giris yaptiniz!\n");
            break;
        }
}














        break;
     case 2:
         printf("\tISTATISTIK ALT MENUSU\n");
         printf("1. Cikan sayilarin kacar defa ciktigini gösteren liste\n");
         printf("2. Cikan sayilarin cikma sayilariyla birlikte listesi");
         printf("3. Hangi odulleri kacar kez kazandiniz\n");
         printf("4. En cok tercih ettiginiz 3 sayinin listesi\n");
         printf("5. Ana Menu\n");


        break;
     case 3:

        break;
     default:
         printf ("Hatali giris yaptiniz.");
         break;

     }
   }



    return 0;
}
