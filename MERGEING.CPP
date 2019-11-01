#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int i=0,j=0,k=0,m;
int c[30];
int a[5]={0,1,2,3,4};
int b[5]={5,6,7,8,9};
for(m=0;m<10;m++)
 {
  if(i<5&&j<5)
  {
   if(a[i]<b[j])
   {
    c[k]=a[i];
    i++;
    k++;
   }
   else
   {
    c[k]=b[j];
    j++;
    k++;
   }
  }
  else if(i>=5)
  {
   c[k]=b[j];
   j++;
   k++;
   }
  else
  {
   c[k]=a[i];
   i++;
   k++;
   }
  }
  cout<<"merging two sorted array array is:"<<endl;
   for(m=0;m<10;m++)
   {
   cout<<c[m]<<endl;
   }
   getch();

   }
