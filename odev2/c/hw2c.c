#include <stdio.h>
#include<stdbool.h>
#define true 1
#define false 0

int imp_met(int x1,int y1);
int exc_or(int x2,int y2);
int not (int x);
int veya(int x,int y);
int and(int x,int y);
int assand1(int x,int y,int z);
int assveya2(int x,int y,int z);
int comveya3(int x,int y);
int comand4(int x,int y);
int disandveya5(int x,int y,int z);
int idveya6(int x);
int idand7(int x);
int anand8(int x);
int monote(int x,int y,int z);
int main()
{
    int options;
    int a,b,c;
    printf("x icin a degeri=");
    scanf("%d",&a);
    printf("y icin b degeri=");
    scanf("%d",&b);
    printf("z icin c degeri=");
    scanf("%d",&c);
      while(a>true || a<false || b>true || b<false || c>true || c<false)
    {
	    printf("x icin a giriniz=\n");
	    scanf("%d",&a);
	    printf("y icin b degerleri giriniz=\n");
		scanf("%d",&b);
		printf("z icin c degeri=");
        scanf("%d",&c);
    }
	printf("Lutfen options giriniz> ");
	scanf("%d",&options);
	switch(options) {

		case 1:printf("%d\n",and(a,b));break;
		case 2:printf("%d\n",veya(a,b));break;
		case 3:printf("%d\n",not(a));break;
		case 4:printf("%d\n",imp_met(a,b));break;
		case 5:printf("%d\n",exc_or(a,b));break;
		case 6:monote(a,b,c);break;
		default:
			printf("exit");
	}

	return 0;
}

int monote(int x,int y,int z)
{
    FILE * fp;

   /* open the file for writing*/
   fp = fopen ("result.txt","w");

   /* write 10 lines of text into the file stream*/

       fprintf (fp,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",assand1(x,y,z),
                assveya2(x,y,z),comveya3(x,y),comand4(x,y),
                disandveya5(x,y,z),
                idveya6(x),idand7(x),anand8(x));

}
int imp_met(int x1,int y1)
{
    int z;
    z=not(x1);

    return veya(z,y1);
}
 int exc_or(int x2,int y2)
{
    int f,e;
    f=veya(x2,y2);
    e=not(and(x2,y2));

   return and(f,e);

}



int not (int x)
{
    if(x==true)
    {
        return(false);
    }
    else
    {
        return(true);
    }
}
int veya(int x,int y)
{
    if(x==false)
    {
        if(y==false)
        {
           return(false);
        }
        else
        {
           return(true);
        }

    }
    else
    {
        return(true);
    }

}

int and(int x,int y)
{
    if(x==true)
    {
        if(y==true)
        {
            return(true);
        }
        else
        {
             return(false);
        }
    }
    else
    {
	    return(false);
    }

}
int assand1(int x,int y,int z)
{
    if(veya(x,veya(y,z))==veya(veya(x,y),z))
    {
         return(1);
    }

    else
    {
        return(0);
    }

}
int assveya2(int x,int y,int z)
{
    if(and(x,and(y,z))==and(and(x,y),z))
    {
         return(1);
    }

    else
    {
        return(0);
    }
}
int comveya3(int x,int y)
{
     if(veya(x,y)==veya(y,x))
    {
         return(1);
    }

    else
    {
        return(0);
    }
}
int comand4(int x,int y)
{
    if(and(x,y)==and(y,x))
    {
         return(1);
    }

    else
    {
        return(0);
    }
}
int disandveya5(int x,int y,int z)
{
    if(and(x,veya(y,z))==veya(and(x,y),and(x,z)))
    {
         return(1);
    }

    else
    {
        return(0);
    }
}
int idveya6(int x)
{
    if(veya(x,0)==x)
    {
         return(1);
    }

    else
    {
        return(0);
    }
}
int idand7(int x)
{
     if(and(x,1)==x)
    {
         return(1);
    }

    else
    {
        return(0);
    }
}
int anand8(int x)
{
     if(and(x,0)==0)
    {
         return(1);
    }

    else
    {
        return(0);
    }
}

