 #include<stdio.h>
 int main()
 {
     long long int tri,a,remainder,n,i;
     for(i=0;i<100;i++)
     {
         tri=0;
         a=1;
         scanf("%lld",&n);
         if(n<0)
            break;
         while(n!=0)
         {
             remainder=n%3;
             n=n/3;
             tri=tri+(a*remainder);
             a=a*10;
         }
         printf("%lld\n",tri);
     }
     return 0;
 }
