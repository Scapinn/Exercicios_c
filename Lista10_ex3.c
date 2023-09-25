#include <stdio.h>

 int proxFibonacci( int n)
 {
     int  primeirotermo= 0 , segundotermo = 1, auxiliar;

         while(segundotermo<= n)
          {
              auxiliar = primeirotermo;
              primeirotermo = segundotermo;
              segundotermo = auxiliar + primeirotermo;

          }
      return segundotermo;
 }

int main()
{
   printf("%d", proxFibonacci(15));
    return 0;
}
