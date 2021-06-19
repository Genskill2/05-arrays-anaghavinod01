/* Enter your solutions in this file */
  
/* Average function declaration */
float average(int a[],int n)
{
  int i;
  float sum=0.0;
  for (i=0;i<n;i++)
  {
    sum = sum + a[i];
  }
   return(sum/n);
}

/* Maximum function declaration */
int max(int a[],int n){
     
     int i,k;
     k = a[0];
     for(i=1;i<n;i++)
        {  
            if(a[i]>k)
           k=a[i];
        }
      return k;
  }


/*Minimum function declaration*/

int min(int a[],int n)
{
  int i,k;
  k=a[0];
  for(i=1;i<n;i++)
       { 
         if(a[i]<k)
           k=a[i];
       }
     
     return k ;
}
