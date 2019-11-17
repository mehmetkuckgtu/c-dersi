#include "lab7.h"
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
void labYedi()
{
 	char puzzle[MAX_SIZE][SIZE];
     
   printf("\n*********************** part1  & part2 **********\n");    
   int lines=0;
   fill_puzzle_matrix(puzzle,&lines);
   printf("Printing the puzzle ...\n");
   print_puzzle(puzzle,lines);	
   printf("\n*********************** part3 ********************\n");
	bool partUc;
	partUc=is_same_word(puzzle,lines,"LOVE",2,1,'a');
	if(partUc)
	{
		printf("LOVE kelimesi bulunmakta");
	}
	else
	{
		printf("LOVE kelime bulunmamakta");
	}
	printf("\n*********************** part4 ********************\n");   
    if(partUc)
    {
	mark_puzzle(puzzle,lines,2,1,'a',4);
	print_puzzle(puzzle,lines);
    }
	printf("\n*********************** part5 ********************\n");
    char choose='y';
    while(choose == 'y')
	{
    	bool b;
    	char wordd[SIZE];
    	int xPoint, yPoint;
    	char dir,space;
        printf("kelime girin:");
        scanf(" %s",wordd);
        printf("bosluk birakacak sekilde satir , sutun, ve  asagiya ise d yana ise a bas:");
    	scanf(" %d %d %c",&xPoint,&yPoint,&dir);
    	
        b= is_same_word(puzzle,lines,wordd,xPoint,yPoint,dir);
		if(b)
		{
    		printf("\nThe word is found and replace with '*'character.\n");
			mark_puzzle(puzzle,lines,xPoint,yPoint,dir,len_str(wordd));
		} 
        printf("\n");
        print_puzzle(puzzle,lines);
        printf("\nDo you want to continue ? [yes(y) or no(n)] : ");
		scanf(" %c",&choose) ;      
    }  	
}
/*
*matrisi ekrana basma
*/
void print_puzzle( char m[][SIZE]//input parametre matris
,int n)//input parametre matrisin satýr ve sutun degerleri
{
	int count_x,count_y;
	printf("\n---------Puzzle------ :\n");
	for(count_x=0;count_x<n; count_x++)
	{
		for(count_y=0;count_y<SIZE; count_y++)
		{
			printf("%c ", m[count_x][count_y]);
		}
		printf("\n");
	}
	printf("\n");
}


/*
*dosyadan matrise deger yazdýrma
*/
void fill_puzzle_matrix( char m[][SIZE]//output parametre
,int* n)//output parametre 
{
    FILE* fp = fopen("lab7.txt","r"); // read mode
 
 	if( fp == NULL )
   	{
   	   printf("Error while opening the file.\n");
    }

    printf("Filling the puzzle ...\n");
    int column=0,row=0;
    char cell;			
    while( fscanf(fp,"%c",&cell)!=EOF )
	{
   		if(cell=='\n')
	    {
		    if(fscanf(fp,"%c",&cell)!=EOF)
			{
				row++;
                column=0;
				m[row][column++]=cell;
           	}	
		       		
		    else 
			break;
        }
        else
		{
			m[row][column++]=cell;
        }
	}
	fclose(fp);
    *n=++row;
}
/*
*  girilen kelimeleri karslastirilir
*  sonuc 1 ise kelime puzzelda var 
*  sonuc 0 ise kelime puzzelda yok
*/
bool is_same_word( char m[][SIZE]//puzzle input parametre
,int n //puzzule boyutu input parametre
,char word[] //string deger input parametre
,int x // kelimenin ilk harfinin bulundugu satir input paramtre 
,int y // kelimenin ilk harfinin bulundugu sutun input parametre
,char d)//yana dogrumu asagiya dogrumu gidilecegini belirliyor input parametre
{
	int wordLenght=len_str(word);
	bool flag=true;
	if(d=='d')  
	{
		if(x+wordLenght>SIZE)
		{
			flag=false;
		}
		else
		{
			int i;
			for(i=0;i<(wordLenght);++i)
			{
				if((word[i]==m[i+x][y]) && flag!=false)
				{
					flag=true;
				}
				else
				{
					flag=false;
				}
			}
		}
	}
	else if (d=='a')
	{
		if(y+wordLenght>SIZE)
		{
			flag=false;
		}
		else
		{
			int i;
			for(i=0;i<(wordLenght);++i)
			{
				if((m[x][i+y])==word[i] && flag!=false)
				{
					flag=true;
				}
				else
				{
					flag=false;
				}
			}
		}
	}
	else
	{
		printf("\neror part 3 ");
	}
	return flag;
}
/*
* girilen kelimenin boyutunu dondurmekte.
*/
int len_str( char* word)
{	
	int counter=0;
	while(word[counter]!='\0')
	{
		counter++;
	}
	return counter;
}
/*
*bulunan kelimenin yerine * ile doldurma
*/
void mark_puzzle(char m[][SIZE]//puzzle OUTPUT PARAMTRE parametre
,int n //puzzule boyutu input parametre
,int x // kelimenin ilk harfinin bulundugu satir input paramtre
,int y // kelimenin ilk harfinin bulundugu sutun input parametre
,char d //yana dogrumu asagiya dogrumu gidilecegini belirliyor input parametre
,int lenght)//kelimenin boyutu input paramtre
{
    if(d=='d')
    {  		
    	int i;
         for(i=x;i<(x+lenght);i++)
         {
         	m[i][y]='*';
		 }        
    }
    else if(d=='a')
    {  
		int i;
        for(i=y;i<(y+lenght);i++)
        {
        	m[x][i]='*';
		}     
         
    } 
}

