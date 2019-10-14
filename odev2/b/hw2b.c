#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0



int not (int x);
int veya(int x,int y);
int veya(int x,int y);
int assand1(int x,int y,int z);
int assveya2(int x,int y,int z);
int comveya3(int x,int y);
int comand4(int x,int y);
int disandveya5(int x,int y,int z);
int idveya6(int x);
int idand7(int x);
int anand8(int x);



int main ()
{
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

   FILE * fp;

   /* open the file for writing*/
   fp = fopen ("result.txt","w");

   /* write 10 lines of text into the file stream*/

       fprintf (fp,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",assand1(a,b,c),
                assveya2(a,b,c),comveya3(a,b),comand4(a,b),
                disandveya5(a,b,c),
                idveya6(a),idand7(a),anand8(a));


   /* close the file*/
   fclose (fp);
   return (0);
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

