#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct k1 {
	char isim[40];
	float BirimFiyat;
};
struct k2 {
	char isim[40];
	float BirimFiyat;
};
struct k3 {
	char isim[40];
	float BirimFiyat;
};
struct k4 {
	char isim[40];
	float BirimFiyat;
};
struct k5 {
	char isim[40];
	float BirimFiyat;
};
struct k6 {
	char isim[40];
	float BirimFiyat;
};
struct k7 {
	char isim[40];
	float BirimFiyat;
};
void kartbilgi()
{
	int kkart,skt,cvv;
	printf("\n*************************************************\n");
	printf("Kredi Karti numaranizi giriniz:");
	scanf("%d",&kkart);
	printf("Kredi Kartinizin son kullanma tarihini giriniz:");
	scanf("%d",&skt);
	printf("Kredi Kartinizin CVV numarasini giriniz:");
	scanf("%d",&cvv);
	printf("\n*************************************************\n");
	printf("Siparisiniz basariyla olusturulmustur.Iyi gunler dileriz.");
}
void dosyalama(char* Urunisim)
{
	FILE *dosya= fopen("kayit2.txt","a");
	fprintf(dosya,"%s\n",Urunisim);
	fclose(dosya);
}
int main() {
	
	int tel;
	char ad[30];
	char soyad[30];
	char adres[100];
	int dogru;
	printf("**********MARKET ONLINE SIPARIS SISTEMI**********\n\n");
	printf("Uyelik kaydi icin bilgilerinizi giriniz:\n\n");
	printf("Adiniz:");
	scanf("%s",&ad);
	printf("Soyadiniz:");
	scanf("%s",&soyad);
	printf("Telefon Numaraniz:");
	scanf("%d",&tel);
	getchar();								
	printf("Adresiniz:");
	scanf("%[^\n]",&adres);
	FILE *fp= fopen("kayit.txt","a");
	fprintf(fp,"%s %s %d %s\n",ad,soyad,tel,adres);
	fclose(fp);
	printf("*************************************************\n");
	printf("Bilgileriniz:\n");
	printf("%s\n",ad);
	printf("%s\n",soyad);
	printf("%d\n",tel);
	printf("%s\n",adres);
	printf("*************************************************\n");
	printf("Bilgileriniz Dogru mu?(1/2)\n1)Dogru\n2)Yanlis\nSeciminiz:");
	scanf("%d",&dogru);
	if(dogru==1)
	{
		printf("*************************************************\n");
		printf("\nUyelik kaydiniz basariyla tamamlanmistir\n\n");
		printf("*************************************************\n");
	}	
	else
	{
		while(dogru!=1){
		printf("Bilgilerinizi tekrar duzenleyiniz\n\n\n");
		printf("Uyelik kaydi icin bilgilerinizi giriniz:\n\n");
		printf("Adiniz:");
		scanf("%s",&ad);
		printf("Soyadiniz:");
		scanf("%s",&soyad);
		printf("Telefon Numaraniz:");
		scanf("%d",&tel);
		getchar();								
		printf("Adresiniz:");
		scanf("%[^\n]",&adres);
		printf("*************************************************\n");
		printf("Bilgileriniz:\n");
		printf("%s\n",ad);
		printf("%s\n",soyad);
		printf("%d\n",tel);
		printf("%s\n",adres);
		printf("*************************************************\n");
		printf("Bilgileriniz Dogru mu?(1/2)\n1)Dogru\n2)Yanlis\nSeciminiz:");
		scanf("%d",&dogru);
		printf("*************************************************\n");
		}
		printf("\nUyelik kaydiniz basariyla tamamlanmistir\n\n\n");
		printf("*************************************************\n");
	}			
		
	struct k1 urun1={"Ekmek",4.99};
	struct k1 urun2={"Pogaca",6.99};
	struct k1 urun3={"Simit",5.99};
	struct k1 urun4={"Borek",8.99};
	
	struct k2 Aurun1={"Su(0.5x12L)",35.95};
	struct k2 Aurun2={"Su(6x1.5L)",29.95};
	struct k2 Aurun3={"Su(5L)",15.95};
	struct k2 Aurun4={"Damacana",45.95};
	
	struct k3 Burun1={"Peynir",42.95};
	struct k3 Burun2={"Yumurta",45.95};
	struct k3 Burun3={"Recel",15.95};
	struct k3 Burun4={"Zeytin",35.95};
	
	struct k4 Curun1={"Domates(KG)",28.99};
	struct k4 Curun2={"Salatalik(KG)",16.99};
	struct k4 Curun3={"Muz(KG)",15.99};
	struct k4 Curun4={"Elma(KG)",12.99};
	
	struct k5 Durun1={"Makarna",10.95};
	struct k5 Durun2={"Pirinc",32.95};
	struct k5 Durun3={"Bulgur",19.95};
	struct k5 Durun4={"Mercimek",30.95};
	
	struct k6 Eurun1={"Ice Tea",10.95};
	struct k6 Eurun2={"Soda",6.95};
	struct k6 Eurun3={"CocaCola",10.95};
	struct k6 Eurun4={"Ayran",9.95};
	
	struct k7 Furun1={"Cips",15.95};
	struct k7 Furun2={"Gofret",5.95};
	struct k7 Furun3={"Biskuvi",10.95};
	struct k7 Furun4={"Kek",15.95};
	
	float tutar=0,SepetToplam=0;
	int secim,urunNo,adet;
	int kategori1=1,kategori2=2,kategori3=3,kategori4=4,kategori5=5,kategori6=6,kategori7=7;
	int AurunNo1=1,AurunNo2=2,AurunNo3=3,AurunNo4=4;
	int BurunNo1=1,BurunNo2=2,BurunNo3=3,BurunNo4=4;
	int CurunNo1=1,CurunNo2=2,CurunNo3=3,CurunNo4=4;
	int DurunNo1=1,DurunNo2=2,DurunNo3=3,DurunNo4=4;
	int EurunNo1=1,EurunNo2=2,EurunNo3=3,EurunNo4=4;
	int FurunNo1=1,FurunNo2=2,FurunNo3=3,FurunNo4=4;
	int GurunNo1=1,GurunNo2=2,GurunNo3=3,GurunNo4=4;
	printf("Ne aramistiniz ?\n\n");
	printf("Siparis vermek istediginiz kategoriyi seciniz:\n%d)Firin\n%d)Su\n%d)Kahvaltilik\n%d)Meyve ve Sebze\n%d)Temel Gida\n%d)Icecek\n%d)Atistirmalik",kategori1,kategori2,kategori3,kategori4,kategori5,kategori6,kategori7);
	printf("\nSeciminizi yaziniz: ");
	scanf("%d",&secim);
	printf("*************************************************\n");
	switch(secim)
	{
		case 1:
				printf("%d)",AurunNo1);
				printf("%s-Fiyat:%.2f TL\n",urun1.isim,urun1.BirimFiyat);
				printf("%d)",AurunNo2);
				printf("%s-Fiyat:%.2f TL\n",urun2.isim,urun2.BirimFiyat);
				printf("%d)",AurunNo3);
				printf("%s-Fiyat:%.2f TL\n",urun3.isim,urun3.BirimFiyat);
				printf("%d)",AurunNo4);
				printf("%s-Fiyat:%.2f TL\n",urun4.isim,urun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);	
					if(urunNo==1)
					{
						tutar=(urun1.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(urun1.isim);
					}
					else if(urunNo==2)
					{
						tutar=(urun2.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(urun2.isim);
					}
					else if(urunNo==3)
					{
						tutar=(urun3.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(urun3.isim);
					}		
					else(urunNo==4);
					{
						tutar=(urun4.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(urun4.isim);
					}
					printf("*************************************************\n");
					printf("Sepet Tutariniz:%.2f TL",SepetToplam);
		break;				
		case 2:
				printf("%d)",BurunNo1);
				printf("%s-Fiyat:%.2f TL\n",Aurun1.isim,Aurun1.BirimFiyat);
				printf("%d)",BurunNo2);
				printf("%s-Fiyat:%.2f TL\n",Aurun2.isim,Aurun2.BirimFiyat);
				printf("%d)",BurunNo3);
				printf("%s-Fiyat:%.2f TL\n",Aurun3.isim,Aurun3.BirimFiyat);
				printf("%d)",BurunNo4);
				printf("%s-Fiyat:%.2f TL\n",Aurun4.isim,Aurun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);
					if(urunNo==1)
					{
						tutar=(Aurun1.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Aurun1.isim);
					}
					else if(urunNo==2)
					{
						tutar=(Aurun2.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Aurun2.isim);
					}
					else if(urunNo==3)
					{
						tutar=(Aurun3.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Aurun3.isim);
					}
					else(urunNo==4);
					{
						tutar=(Aurun4.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Aurun4.isim);
					}
					printf("*************************************************\n");
					printf("Sepet Tutariniz:%.2f TL",SepetToplam);
		break;
		case 3:
				printf("%d)",CurunNo1);
				printf("%s-Fiyat:%.2f TL\n",Burun1.isim,Burun1.BirimFiyat);
				printf("%d)",CurunNo2);
				printf("%s-Fiyat:%.2f TL\n",Burun2.isim,Burun2.BirimFiyat);
				printf("%d)",CurunNo3);
				printf("%s-Fiyat:%.2f TL\n",Burun3.isim,Burun3.BirimFiyat);
				printf("%d)",CurunNo4);
				printf("%s-Fiyat:%.2f TL\n",Burun4.isim,Burun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);
					if(urunNo==1)
					{
						tutar=(Burun1.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Burun1.isim);
					}
					else if(urunNo==2)
					{
						tutar=(Burun2.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Burun2.isim);
					}
					else if(urunNo==3)
					{
						tutar=(Burun3.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Burun3.isim);
					}
					else(urunNo==4);
					{
						tutar=(Burun4.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Burun4.isim);
				    }
			    	printf("*************************************************\n");
					printf("Sepet Tutariniz:%.2f TL",SepetToplam);
		break;		
		case 4:
				printf("%d)",DurunNo1);
				printf("%s-Fiyat:%.2f TL\n",Curun1.isim,Curun1.BirimFiyat);
				printf("%d)",DurunNo2);
				printf("%s-Fiyat:%.2f TL\n",Curun2.isim,Curun2.BirimFiyat);
				printf("%d)",DurunNo3);
				printf("%s-Fiyat:%.2f TL\n",Curun3.isim,Curun3.BirimFiyat);
				printf("%d)",DurunNo4);
				printf("%s-Fiyat:%.2f TL\n",Curun4.isim,Curun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);	
					if(urunNo==1)
					{
						tutar=(Curun1.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Curun1.isim);
					}
					else if(urunNo==2)
					{
						tutar=(Curun2.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Curun2.isim);
					}
					else if(urunNo==3)
					{
						tutar=(Curun3.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Curun3.isim);
					}		
					else(urunNo==4);
					{
						tutar=(Curun4.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Curun4.isim);
					}
					printf("*************************************************\n");
					printf("Sepet Tutariniz:%.2f TL",SepetToplam);
		break;
		case 5:
				printf("%d)",EurunNo1);
				printf("%s-Fiyat:%.2f TL\n",Durun1.isim,Durun1.BirimFiyat);
				printf("%d)",EurunNo2);
				printf("%s-Fiyat:%.2f TL\n",Durun2.isim,Durun2.BirimFiyat);
				printf("%d)",EurunNo3);
				printf("%s-Fiyat:%.2f TL\n",Durun3.isim,Durun3.BirimFiyat);
				printf("%d)",EurunNo4);
				printf("%s-Fiyat:%.2f TL\n",Durun4.isim,Durun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);	
					if(urunNo==1)
					{
						tutar=(Durun1.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Durun1.isim);
					}
					else if(urunNo==2)
					{
						tutar=(Durun2.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Durun2.isim);
					}
					else if(urunNo==3)
					{
						tutar=(Durun3.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Durun3.isim);
					}		
					else(urunNo==4);
					{
						tutar=(Durun4.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Durun4.isim);
					}
					printf("*************************************************\n");
					printf("Sepet Tutariniz:%.2f TL",SepetToplam);
		break;
		case 6:
				printf("%d)",FurunNo1);
				printf("%s-Fiyat:%.2f TL\n",Eurun1.isim,Eurun1.BirimFiyat);
				printf("%d)",FurunNo2);
				printf("%s-Fiyat:%.2f TL\n",Eurun2.isim,Eurun2.BirimFiyat);
				printf("%d)",FurunNo3);
				printf("%s-Fiyat:%.2f TL\n",Eurun3.isim,Eurun3.BirimFiyat);
				printf("%d)",FurunNo4);
				printf("%s-Fiyat:%.2f TL\n",Eurun4.isim,Eurun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);	
					if(urunNo==1)
					{
						tutar=(Eurun1.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Eurun1.isim);
					}
					else if(urunNo==2)
					{
						tutar=(Eurun2.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Eurun2.isim);
					}
					else if(urunNo==3)
					{
						tutar=(Eurun3.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Eurun3.isim);
					}		
					else(urunNo==4);
					{
						tutar=(Eurun4.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Eurun4.isim);
					}
					printf("*************************************************\n");
					printf("Sepet Tutariniz:%.2f TL",SepetToplam);
		break;
		case 7:
				printf("%d)",GurunNo1);
				printf("%s-Fiyat:%.2f TL\n",Furun1.isim,Furun1.BirimFiyat);
				printf("%d)",GurunNo2);
				printf("%s-Fiyat:%.2f TL\n",Furun2.isim,Furun2.BirimFiyat);
				printf("%d)",GurunNo3);
				printf("%s-Fiyat:%.2f TL\n",Furun3.isim,Furun3.BirimFiyat);
				printf("%d)",GurunNo4);
				printf("%s-Fiyat:%.2f TL\n",Furun4.isim,Furun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);	
					if(urunNo==1)
					{
						tutar=(Furun1.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Furun1.isim);
					}
					else if(urunNo==2)
					{
						tutar=(Furun2.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Furun2.isim);
					}
					else if(urunNo==3)
					{
						tutar=(Furun3.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Furun3.isim);
					}		
					else(urunNo==4);
					{
						tutar=(Furun4.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
						dosyalama(Furun4.isim);
					}
					printf("*************************************************\n");
					printf("Sepet Tutariniz:%.2f TL",SepetToplam);
		break;
	}
			int secim2,secim3,kkart,skt,cvv;
				printf("\n*************************************************\n");
				printf("\nNe yapmak istersiniz?\n1)Sepete git ve odeme yap\n2)Alisverise Devam et");
				printf("\nSeciminiz: ");
				scanf("%d",&secim2);
				printf("*************************************************\n");
			if(secim2==1)
			{
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("Odeme yontemi seciniz:\n1)Kapida Odeme\n2)Kredi karti");
				printf("\nSeciminiz: ");
				scanf("%d",&secim3);
					if(secim3==1)
					{
						SepetToplam=(SepetToplam+12.99);
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
					}
					else if(secim3==2)
					{
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
					}
			}
			else
			{
			while(secim2!=1){
				
			
			
				printf("Ne aramistiniz ?\n\n");
				printf("Siparis vermek istediginiz kategoriyi seciniz:\n%d)Firin\n%d)Su\n%d)Kahvaltilik\n%d)Meyve ve Sebze\n%d)Temel Gida\n%d)Icecek\n%d)Atistirmalik",kategori1,kategori2,kategori3,kategori4,kategori5,kategori6,kategori7);
				printf("\nSeciminizi yaziniz: ");
				scanf("%d",&secim);
				printf("*************************************************\n");
			if(secim==1)
			{
				printf("%d)",AurunNo1);
				printf("%s-Fiyat:%.2f TL\n",urun1.isim,urun1.BirimFiyat);
				printf("%d)",AurunNo2);
				printf("%s-Fiyat:%.2f TL\n",urun2.isim,urun2.BirimFiyat);
				printf("%d)",AurunNo3);
				printf("%s-Fiyat:%.2f TL\n",urun3.isim,urun3.BirimFiyat);
				printf("%d)",AurunNo4);
				printf("%s-Fiyat:%.2f TL\n",urun4.isim,urun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);
					if(urunNo==1)
					{
						tutar=(urun1.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
					}
					else if(urunNo==2)
					{
						tutar=(urun2.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
					}
					else if(urunNo==3)
					{
						tutar=(urun3.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
					}		
					else(urunNo==4);
					{
						tutar=(urun4.BirimFiyat*adet);
						SepetToplam=SepetToplam+tutar;
						tutar=0;
						adet=0;
					}
					printf("Sepet Tutariniz:%.2f TL\n",SepetToplam);
					printf("\n*************************************************\n");
					printf("\nNe yapmak istersiniz?\n1)Sepete git ve odeme yap\n2)Alisverise Devam et");
					printf("\nSeciminiz: ");
					scanf("%d",&secim2);
					printf("*************************************************\n");
					if(secim2==1)
			{
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("Odeme yontemi seciniz:\n1)Kapida Odeme\n2)Kredi karti");
				printf("\nSeciminiz: ");
				scanf("%d",&secim3);
					if(secim3==1)
					{
						SepetToplam=(SepetToplam+12.99);
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
					}
					else if(secim3==2)
					{
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
					}
			}				
				}
				else if(secim==2)
		{
			printf("%d)",BurunNo1);
			printf("%s-Fiyat:%.2f TL\n",Aurun1.isim,Aurun1.BirimFiyat);
			printf("%d)",BurunNo2);
			printf("%s-Fiyat:%.2f TL\n",Aurun2.isim,Aurun2.BirimFiyat);
			printf("%d)",BurunNo3);
			printf("%s-Fiyat:%.2f TL\n",Aurun3.isim,Aurun3.BirimFiyat);
			printf("%d)",BurunNo4);
			printf("%s-Fiyat:%.2f TL\n",Aurun4.isim,Aurun4.BirimFiyat);
			printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
			scanf("%d",&urunNo);
			printf("Adet giriniz: ");
			scanf("%d",&adet);
			if(urunNo==1)
			{
				tutar=(Aurun1.BirimFiyat*adet);
				SepetToplam=SepetToplam+tutar;
				tutar=0;
				adet=0;
			}
			else if(urunNo==2)
			{
				tutar=(Aurun2.BirimFiyat*adet);
				SepetToplam=SepetToplam+tutar;
				tutar=0;
				adet=0;
			}
			else if(urunNo==3)
			{
				tutar=(Aurun3.BirimFiyat*adet);
				SepetToplam=SepetToplam+tutar;
				tutar=0;
				adet=0;
			}
			else(urunNo==4);
			{
				tutar=(Aurun4.BirimFiyat*adet);
				SepetToplam=SepetToplam+tutar;
				tutar=0;
				adet=0;
			}
			printf("*************************************************\n");
			printf("Sepet Tutariniz:%.2f TL",SepetToplam);
			printf("\n*************************************************\n");
			printf("\nNe yapmak istersiniz?\n1)Sepete git ve odeme yap\n2)Alisverise Devam et");
			printf("\nSeciminiz: ");
			scanf("%d",&secim2);
			printf("*************************************************\n");
			if(secim2==1)
			{
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("Odeme yontemi seciniz:\n1)Kapida Odeme\n2)Kredi karti");
				printf("\nSeciminiz: ");
				scanf("%d",&secim3);
					if(secim3==1)
					{
						SepetToplam=(SepetToplam+12.99);
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
					}
					else if(secim3==2)
					{
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
					}
			}
		}
		else if(secim==3)
		{
			printf("%d)",CurunNo1);
			printf("%s-Fiyat:%.2f TL\n",Burun1.isim,Burun1.BirimFiyat);
			printf("%d)",CurunNo2);
			printf("%s-Fiyat:%.2f TL\n",Burun2.isim,Burun2.BirimFiyat);
			printf("%d)",CurunNo3);
			printf("%s-Fiyat:%.2f TL\n",Burun3.isim,Burun3.BirimFiyat);
			printf("%d)",CurunNo4);
			printf("%s-Fiyat:%.2f TL\n",Burun4.isim,Burun4.BirimFiyat);
			printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
			scanf("%d",&urunNo);
			printf("Adet giriniz: ");
			scanf("%d",&adet);
				if(urunNo==1)
			{
				tutar=(Burun1.BirimFiyat*adet);
				SepetToplam=SepetToplam+tutar;
				tutar=0;
				adet=0;
			}
			else if(urunNo==2)
			{
				tutar=(Burun2.BirimFiyat*adet);
				SepetToplam=SepetToplam+tutar;
				tutar=0;
				adet=0;
			}
			else if(urunNo==3)
			{
				tutar=(Burun3.BirimFiyat*adet);
				SepetToplam=SepetToplam+tutar;
				tutar=0;
				adet=0;
			}
			else(urunNo==4);
			{
				tutar=(Burun4.BirimFiyat*adet);
				SepetToplam=SepetToplam+tutar;
				tutar=0;
				adet=0;
		    }
		    printf("*************************************************\n");
			printf("Sepet Tutariniz:%.2f TL",SepetToplam);
			printf("\n*************************************************\n");
			printf("\nNe yapmak istersiniz?\n1)Sepete git ve odeme yap\n2)Alisverise Devam et");
			printf("\nSeciminiz: ");
			scanf("%d",&secim2);
			printf("*************************************************\n");
			if(secim2==1)
			{
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("Odeme yontemi seciniz:\n1)Kapida Odeme\n2)Kredi karti");
				printf("\nSeciminiz: ");
				scanf("%d",&secim3);
					if(secim3==1)
					{
						SepetToplam=(SepetToplam+12.99);
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
					}
					else if(secim3==2)
					{
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
					}
			}
		}
		else if(secim==4)
		{
			printf("%d)",DurunNo1);
			printf("%s-Fiyat:%.2f TL\n",Curun1.isim,Curun1.BirimFiyat);
			printf("%d)",DurunNo2);
			printf("%s-Fiyat:%.2f TL\n",Curun2.isim,Curun2.BirimFiyat);
			printf("%d)",DurunNo3);
			printf("%s-Fiyat:%.2f TL\n",Curun3.isim,Curun3.BirimFiyat);
			printf("%d)",DurunNo4);
			printf("%s-Fiyat:%.2f TL\n",Curun4.isim,Curun4.BirimFiyat);
			printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
			scanf("%d",&urunNo);
			printf("Adet giriniz: ");
			scanf("%d",&adet);	
				if(urunNo==1)
				{
					tutar=(Curun1.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				else if(urunNo==2)
				{
					tutar=(Curun2.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				else if(urunNo==3)
				{
					tutar=(Curun3.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}		
				else(urunNo==4);
				{
					tutar=(Curun4.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				printf("*************************************************\n");
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("\nNe yapmak istersiniz?\n1)Sepete git ve odeme yap\n2)Alisverise Devam et");
				printf("\nSeciminiz: ");
				scanf("%d",&secim2);
				printf("*************************************************\n");
				if(secim2==1)
			{
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("Odeme yontemi seciniz:\n1)Kapida Odeme\n2)Kredi karti");
				printf("\nSeciminiz: ");
				scanf("%d",&secim3);
					if(secim3==1)
					{
						SepetToplam=(SepetToplam+12.99);
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
					}
					else if(secim3==2)
					{
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
					}
			}
		}
		else if(secim==5)
		{
				printf("%d)",EurunNo1);
				printf("%s-Fiyat:%.2f TL\n",Durun1.isim,Durun1.BirimFiyat);
				printf("%d)",EurunNo2);
				printf("%s-Fiyat:%.2f TL\n",Durun2.isim,Durun2.BirimFiyat);
				printf("%d)",EurunNo3);
				printf("%s-Fiyat:%.2f TL\n",Durun3.isim,Durun3.BirimFiyat);
				printf("%d)",EurunNo4);
				printf("%s-Fiyat:%.2f TL\n",Durun4.isim,Durun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);	
					if(urunNo==1)
				{
					tutar=(Durun1.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				else if(urunNo==2)
				{
					tutar=(Durun2.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				else if(urunNo==3)
				{
					tutar=(Durun3.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}		
				else(urunNo==4);
				{
					tutar=(Durun4.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				printf("*************************************************\n");
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("\nNe yapmak istersiniz?\n1)Sepete git ve odeme yap\n2)Alisverise Devam et");
				printf("\nSeciminiz: ");
				scanf("%d",&secim2);
				printf("*************************************************\n");
				if(secim2==1)
			{
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("Odeme yontemi seciniz:\n1)Kapida Odeme\n2)Kredi karti");
				printf("\nSeciminiz: ");
				scanf("%d",&secim3);
					if(secim3==1)
					{
						SepetToplam=(SepetToplam+12.99);
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
					}
					else if(secim3==2)
					{
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
					}
			}
		}
		else if(secim==6)
		{
				printf("%d)",FurunNo1);
				printf("%s-Fiyat:%.2f TL\n",Eurun1.isim,Eurun1.BirimFiyat);
				printf("%d)",FurunNo2);
				printf("%s-Fiyat:%.2f TL\n",Eurun2.isim,Eurun2.BirimFiyat);
				printf("%d)",FurunNo3);
				printf("%s-Fiyat:%.2f TL\n",Eurun3.isim,Eurun3.BirimFiyat);
				printf("%d)",FurunNo4);
				printf("%s-Fiyat:%.2f TL\n",Eurun4.isim,Eurun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);	
				if(urunNo==1)
				{
					tutar=(Eurun1.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				else if(urunNo==2)
				{
					tutar=(Eurun2.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				else if(urunNo==3)
				{
					tutar=(Eurun3.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}		
				else(urunNo==4);
				{
					tutar=(Eurun4.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				printf("*************************************************\n");
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("\nNe yapmak istersiniz?\n1)Sepete git ve odeme yap\n2)Alisverise Devam et");
				printf("\nSeciminiz: ");
				scanf("%d",&secim2);
				printf("*************************************************\n");
				if(secim2==1)
				{
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("Odeme yontemi seciniz:\n1)Kapida Odeme\n2)Kredi karti");
				printf("\nSeciminiz: ");
				scanf("%d",&secim3);
					if(secim3==1)
					{
						SepetToplam=(SepetToplam+12.99);
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
					}
					else if(secim3==2)
					{
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
					}
			}
		}
		else if(secim==7)
		{
				printf("%d)",GurunNo1);
				printf("%s-Fiyat:%.2f TL\n",Furun1.isim,Furun1.BirimFiyat);
				printf("%d)",GurunNo2);
				printf("%s-Fiyat:%.2f TL\n",Furun2.isim,Furun2.BirimFiyat);
				printf("%d)",GurunNo3);
				printf("%s-Fiyat:%.2f TL\n",Furun3.isim,Furun3.BirimFiyat);
				printf("%d)",GurunNo4);
				printf("%s-Fiyat:%.2f TL\n",Furun4.isim,Furun4.BirimFiyat);
				printf("Sepete eklemek istediginiz urunun numarasini tuslayiniz: ");
				scanf("%d",&urunNo);
				printf("Adet giriniz: ");
				scanf("%d",&adet);	
				if(urunNo==1)
				{
					tutar=(Furun1.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				else if(urunNo==2)
				{
					tutar=(Furun2.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				else if(urunNo==3)
				{
					tutar=(Furun3.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}		
				else(urunNo==4);
				{
					tutar=(Furun4.BirimFiyat*adet);
					SepetToplam=SepetToplam+tutar;
					tutar=0;
					adet=0;
				}
				printf("*************************************************\n");
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("\nNe yapmak istersiniz?\n1)Sepete git ve odeme yap\n2)Alisverise Devam et");
				printf("\nSeciminiz: ");
				scanf("%d",&secim2);
				printf("\n*************************************************\n");
				if(secim2==1)
			{
				printf("Sepet Tutariniz:%.2f TL",SepetToplam);
				printf("\n*************************************************\n");
				printf("Odeme yontemi seciniz:\n1)Kapida Odeme\n2)Kredi karti");
				printf("\nSeciminiz: ");
				scanf("%d",&secim3);
					if(secim3==1)
					{
						SepetToplam=(SepetToplam+12.99);
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							printf("\n*************************************************\n");
							printf("Siparisinizi basariyla olusturulmustur.Iyi gunler dileriz.");
						}
					}
					else if(secim3==2)
					{
						if(SepetToplam<150)
						{
							SepetToplam=(SepetToplam+16.99);
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
						else
						{
							printf("Genel Toplam:%.2f TL",SepetToplam);
							kartbilgi();
						}
					}
				}
			}
		}
	}		
return 0;
}