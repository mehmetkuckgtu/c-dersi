/****************************************************
*Kodu olu�turan: mehmet k���k
*bu kod yeni veri tipleri olu�turma ve kullanma �zerine
*al��t�rma yap�lm��t�r.
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
    //monday =0 teusday=1,wednesday=2,thursday=3,friday=4  constantd�r.
    //workingdays_t (sondaki t tip oldu�unu g�sterir)integer double gibi yeni bir tip a_days ise parametre
    a_day=friday;
    b_day=wednesday;
    c_day=a_day*b_day;// burada otomatik tan�mlama yapmam�z gerekir.
    //int c_day; tan�mlay�p ekrana bast�rd���mda 8 cevab� geldi.
    d_day=a_day+2;
    e_day=d_day%5;// mad olarak workingdays_t tipinin i�inde de�erleri tutabiliriz.
	if(b_day==wednesday)
    {
    	printf("wednesday\n");
		// burada wednesday yazs�n� ekrana yazd�rmak i�in kullan�yoruz.
    	// ba�ka t�rl� sonu� int de�er geliyor.
	}
    printf("a_day=%d\n",a_day);
    printf("d_day=%d\n",d_day);
    printf("c_day=%d\n",c_day);
	printf("e_day=%d\n",e_day);     
    printf("sizeof= %d", sizeof(a_day));
    return 0;
 }
