#include<stdio.h>

int drawTree(int numberOfTriangles,int truckWidtHeight,int truckWidth, char ch);

int main()
{
    int a,b,c;
    char d;
    int options;
        printf("numberOfTriangles 0-10 arasi deger giriniz ");
        scanf("%d",&a);
        printf("truckWidtHeight 0-10 arasi deger giriniz");
        scanf("%d",&b);
        printf("truckWidth 0-10 arasi deger giriniz");
        scanf("%d",&c);

      while(a<0 || a>11 || b<0 || b>11 || c<0 || c>11)
    {

        printf("numberOfTriangles 0-10 arasi deger giriniz\n ");
        scanf("%d",&a);
        printf("truckWidtHeight 0-10 arasi deger giriniz\n");
        scanf("%d",&b);
        printf("truckWidth 0-10 arasi deger giriniz\n");
        scanf("%d",&c);

    }
	printf("Lutfen options giriniz> 1=X , 2=O karakteridir.\n");
	scanf("%d",&options);
	switch(options) {

		case 1:d='X';break;
		case 2:d='O';break;
		default:
			printf("eror code");
	}
    printf("%d\n",drawTree(a,b,c,d));

    return(0);
}

int drawTree(int numberOfTriangles,int truckWidtHeight,int truckWidth, char ch)
{
    int row,space,star=0;int y;int rows=1;

   for(y=0;y<=numberOfTriangles;y+=1)
   {
    for(row = 1;row <= rows; row++) {
     /* Printing spaces */
        for(space = 0; space <= numberOfTriangles-row; space++) {
           printf("  ");
        }
        /* Printing stars */
        while(star != (2*row - 1)) {
            printf("%c ",ch);
            star++;;
        }
        star=0;
        printf("\n");
    }

        rows+=1;
    }
        int b;for(b=1;b<=truckWidtHeight;b+=1)
        {

         for(space = 1; space <= abs(numberOfTriangles-(truckWidth/2));space++) {
           printf("  ");
        }

       int z;for(z=1;z<=truckWidth;z+=1)
        {
            printf("%c ",ch);
        }
            printf("\n");

    }
            printf("row",row);
    return(0);

}
