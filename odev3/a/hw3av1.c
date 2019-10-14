#include<stdio.h>

#define pi 3.141592
double taysinsol (double x);

int main()
{
           double a;
           printf("degerini giriniz ");
           scanf("%lf",&a);
            FILE * fp;

   /* open the file for writing*/
   fp = fopen ("sinus.txt","w");

   /* write 10 lines of text into the file stream*/

       fprintf (fp,"%.2f\n icin deger ,%f\n",a,taysinsol(a));


   /* close the file*/
   fclose (fp);





    return(0);
}
double taysinsol (double x)
{
     double x1,sinx,fory=0.0,forx=0.0,fak=1.0,z=1.0,h=0.0,b=1.0;
            x1=x*pi/180;//radyana çeviriyoruz

            int g; for(g=1;g<150;g=2*g+1)
            {

            int i; for(i=1;i<=(2*g+1);i+=1)
            {
                fak*=b;

                b+=1.0;
            }
                h=2.0*z+1.0;
                forx=(pow(-1.0,z)*pow(x1,h))/(fak);
                fory+=forx;
                z+=1.0;

            }
            sinx=x1+fory;
            return(sinx);
}
