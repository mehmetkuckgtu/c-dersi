#include<stdio.h>
#include<stdbool.h>
#define bool int
#define true 1
#define false 0


int and(int x,int y);
int veya(int x,int y);
int not(int x);
int imp_met(int x1,int y1);
int exc_or(int x2,int y2);
int notconv (int x);
int veyaconv(int x,int y);
int andconv(int x,int y);
int main()
{
    int a,b;
    printf("x icin a giriniz=\n");
    scanf("%d",&a);
    printf("y icin b degerleri giriniz=\n");
    scanf("%d",&b);

     while((a<0 || a>1) && (b<0 || b>1 ))//burasý sonraki konu oldugundan veya ve ve deðil leri alýyorum
     {
	    printf("x icin a giriniz=\n");
	    scanf("%d",&a);
	    printf("y icin b degerleri giriniz=\n");
	    scanf("%d",&b);
     }
    and(a,b);
	veya(a,b);
    not(a);
    imp_met(a,b);
    exc_or(a,b);

     return (0);

}

int and(int x,int y)
{
     if(x==true)
    {
        if(y==true)
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    else
    {
     if(y==true)
        {
            printf("false\n");
        }
        else
        {
            printf("false\n");
        }
    }
}


 int veya(int x,int y)
{
    if(x==false)
    {
        if(y==false)
        {
            printf("false\n");
        }
        else
        {
            printf("true\n");
        }
    }
    else
    {
        if(y==false)
        {
            printf("true\n");
        }
        else
        {
            printf("true\n");
        }
    }
}
int not(int x)
{
    if(x==true)
    {
       printf("false\n");
    }
    else
    {
    printf("false\n");
    }
}

 int imp_met(int x1,int y1)
{
    int z;
    z=notconv(x1);
    veya(z,y1);
}
 int exc_or(int x2,int y2)
{
    int f,e;
    f=veyaconv(x2,y2);
    e=notconv(andconv(x2,y2));

    and(f,e);

}



int notconv (int x)
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
int veyaconv(int x,int y)
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
        if(y==false)
        {
            return(true);
        }
        else
        {
            return(true);
        }

    }

}

int andconv(int x,int y)
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
     if(y==true)
        {
            return(false);
        }
        else
        {
            return(false);
        }

    }

}
