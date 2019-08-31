/****************************************************
*Kodu oluþturan: mehmet küçük
*bu kod yeni veri tipleri oluþturma ve kullanma üzerine
*alýþtýrma yapýlmýþtýr.
******************************************************/
 #include<stdio.h>

 int main()
 {
    typedef enum
    {
        monday,teusday,wednesday,thursday,friday
    }workingdays_t;
    workingdays_t c_day;
	workingdays_t b_day;
	workingdays_t d_day;
	workingdays_t e_day;
    workingdays_t a_day;
	//a_day alabilacegi degerler hafta ici gunudur
    //monday =0 teusday=1,wednesday=2,thursday=3,friday=4  constantdýr.
    //workingdays_t (sondaki t tip olduðunu gösterir)integer double gibi yeni bir tip a_days ise parametre
    a_day=friday;
    b_day=wednesday;
    c_day=a_day*b_day;// burada otomatik tanýmlama yapmamýz gerekir.
    //int c_day; tanýmlayýp ekrana bastýrdýðýmda 8 cevabý geldi.
    d_day=a_day+2;
    e_day=d_day%5;// mad olarak workingdays_t tipinin içinde deðerleri tutabiliriz.
	if(b_day==wednesday)
    {
    	printf("wednesday\n");
		// burada wednesday yazsýný ekrana yazdýrmak için kullanýyoruz.
    	// baþka türlü sonuç int deðer geliyor.
	}
    printf("a_day=%d\n",a_day);
    printf("d_day=%d\n",d_day);
    printf("c_day=%d\n",c_day);
	printf("e_day=%d\n",e_day);     
    printf("sizeof= %d", sizeof(a_day));
    return 0;
 }
