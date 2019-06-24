#include <stdio.h>

#include<string.h>


int main()
{

   char s1[20]="articles";

   char s2[20]="ractiels";

   int l,l1,i,j,temp;

   l=strlen(s1);

   l1=strlen(s2);

   if(l!=l1)

   {

       printf("Strings are not an anagram\n");

       return 0;

   }

   for(i=0;i<l-1;i++)

   {

       for(j=i+1;j<l;j++)

       {

           if(s1[i]>s1[j])

           {

               temp=s1[i];

               s1[i]=s1[j];

               s1[j]=temp;

           }

           if(s2[i]>s2[j])

           {

               temp=s2[i];

               s2[i]=s2[j];

               s2[j]=temp;

           }

       }

   }

   for(i=0;i<l;i++)

   {

       if(s1[i]!=s2[i])

       {

           printf("The Strings are not Anagram");

           return 0;

       }

   }

   printf("Strings are Anagrams");

    return 0;

}