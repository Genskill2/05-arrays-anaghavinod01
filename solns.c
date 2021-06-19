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


/* MODE FUCTION DECLARATION */

int mode(int a[],int n) {
  int mode_value = 0;
  int max_count = 0;
  int count = 0;
  int i,j;
  
              for (i=0;i<n;i++)  {
                      
                  for (j=0;j<n;j++) {
                      if (a[j] == a[i])
                       count++;
                  }
                
                if (count > max_count) {
                  max_count =count;
                  mode_value =a[i];
                }
              }
             return mode_value;
      
}




