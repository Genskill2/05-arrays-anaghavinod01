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

