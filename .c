#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct otoekle{int kapasite[4];
int otobusno[4];
char model[4];
int personel;};
int s2=0;
int secim;
int secim3;
int secim2;
void fonkanamenu();
void fonkmenufirma();
void fonkmenumusteri();
void fonk1(); /* otobus ekle menüsü */
void fonk2(); /* sefer bilgisimenüsü  */
void fonk3(); /* sefer koltuk bilgisi */
void fonk4(); /* sefer listele */
void fonk5(); /* sefer rezervasyon yap */
void fonk6(); /* rezervasyon göster*/
void fonk1()
{   struct otoekle bir [1];
    int sayac=0;int personel;
    s2++;
    for(int i=0;i<4;i++)
    {
        sayac=i;
if(sayac==0)
{printf("%d.girilen otobus nosu:%d dir.\n",s2,s2);
      printf("\nOtosbus Modeli:");
      scanf("%s",&bir[s2-1].model);
    hata1:
      printf("\nPersonel Sayisi:");
      scanf("%d",&personel);
    if((personel!=2)&&(personel!=3)){
      printf("HATALI GIRIS!!! <Otobuste 2 veya 3 personel calisabilir...4 saatten fazla yolculuklar icin 3 personel seciniz>");
      goto hata1;
    }
    printf("\nKapasite:");
    scanf("%d",&bir[s2-1].kapasite);
     if(bir[i].kapasite>=30)
      printf("uzun yol otobusudur.");
    else
      printf("kisa yol otobusudur.");}

}}
void fonk2()
{  struct otoekle bir [1];
     int ucret;
    int toplam=5000;
    char sehir;
    char sehir2;
    int k;
    int seferno;
    srand(time(NULL));
    seferno=100+rand()%999;
    printf("\nSefer no:16B%d",seferno);
    int sefersaat;
    printf("\nSecmek istediginiz otobus no:");
    scanf("%d",&s2);
    dogru:
    printf("\nSefer baslangic saatini giriniz-->");
    scanf("%d",&sefersaat);
    printf(":");
    scanf("%d",&k);
    if((k!=16)||(sefersaat>24)||(sefersaat<0))
                                {
        printf("\nSefer bu saatte gerceklesmez!!!\nsonu 16 ile bitmelidir...\n24 saatlik zaman dilimi olmalidir...\n");
        goto dogru;
    }
    printf("sefer baslangic sehri:");
    scanf("%s",&sehir);
    printf("\nsefer varis sehri:");
    scanf("%s",&sehir2);
    printf("\ntoplam HASILAT:%d",toplam);
    ucret=toplam/40;
    printf("\nMusteri basi ucret:%d",ucret);
}



void fonkmenufirma ()
{
        switch(secim2)
    {
    case 1:
        printf("\nOtobus Ekle-->\n");
        fonk1();
    case 2:
        printf("\nSefer Bilgisi Ekle-->");
        fonk2();
    case 3:
        printf("\nSefer/Koltuk Bilgisi Ekle-->");
    case 4:
        printf("\nBir Ust Menuye Don-->");
        fonkanamenu();
    }

    }


void fonkanamenu( )
{
la:
    printf("  ''\nOTOBUS SEFER REZERVASYON SISTEMI''\n");
    printf(" ANA MENU\n1.Firma Girisi\n2.Musteri Girisi\n3.Cikis\n");
    printf("Lutfen bir giris yapiniz:\n");
    scanf("%d",&secim);


    switch(secim)
    {
    case 1:
        printf("1.Otobus Ekle\n2.Sefer Bilgisi Ekle\n3.Sefer/Koltuk Bilgisi Ekle\n4.Bir Ust Menuye Don\n");
        printf("Lutfen bir giris yapiniz:\n");
        scanf("%d",&secim2);
        fonkmenufirma();
        break;
   case 2:
        printf("1.Seferleri Listele\n2.Sefer Rezervasyon Yap\n3.Bir Ust Menuye Don\n4.Rezevasyon Goster\n");
        printf("Lutfen bir giris yapiniz:\n");
        scanf("%d",&secim3);
        fonkmenumusteri();
        break;
   case 3:
        printf("x");
        break;
        default:
        printf("Hatali bir giris yaptiniz!!!!! ");
        break;
       goto la;

    }


}
void fonkmenumusteri()
{


 switch(secim3)
    {
   case 1:
       printf("\nSeferleri Listele");
   case 2:
       printf("\nSefer Rezervasyon Yap");
   case 3:
       printf("\nBir Ust Menuye Don");
       fonkanamenu();
       break;
   case 4:
       printf("\nRezevasyon Goster");
       }
}

int main()
{la:
    printf("  ''\nOTOBUS SEFER REZERVASYON SISTEMI''\n");
    printf(" ANA MENU\n1.Firma Girisi\n2.Musteri Girisi\n3.Cikis\n");
    printf("Lutfen bir giris yapiniz:\n");
    scanf("%d",&secim);


    switch(secim)
    {
    case 1:
        printf("1.Otobus Ekle\n2.Sefer Bilgisi Ekle\n3.Sefer/Koltuk Bilgisi Ekle\n4.Bir Ust Menuye Don\n");
        printf("Lutfen bir giris yapiniz:\n");
        scanf("%d",&secim2);
        fonkmenufirma();
   case 2:
        printf("1.Seferleri Listele\n2.Sefer Rezervasyon Yap\n3.Bir Ust Menuye Don\n4.Rezevasyon Goster\n");
        printf("Lutfen bir giris yapiniz:\n");
        scanf("%d",&secim3);
        fonkmenumusteri();
        break;
   case 3:
        printf("CIKIS");
        break;
        default:
        printf("Hatali bir giris yaptiniz!!!!! ");
       goto la;
    }
   return 0;    }