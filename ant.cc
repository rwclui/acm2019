#include <stdio.h>
int c,big,little,L,i,j,k,n;                 //c: number of test cases; L: the length of the pole; n: number of ants on the pole
main(){
   scanf("%d",&c);                   // input the number of test cases
   while (c-- && (2 == scanf("%d%d",&L,&n))) {          //Input the length of the pole and the number of ants on the pole
      big = little = 0;                  // Initialization
      for (i=0;i<n;i++) {         // Input original positions for all ants and adjust times
         scanf("%d",&k);
         if (k > big) big = k;            // adjust the earliest possible time
         if (L-k > big) big = L-k;
         if (k > L-k) k = L-k;            // adjust the latest possible time
         if (k > little) little = k;
      }
      printf("%d %d\n",little,big);        //Output the result
   }
   if (c != -1) printf("missing input\n");
}
