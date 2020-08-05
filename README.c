#include<stdio.h>
  
   int main(void)
   {
      int i, tmp, t[10];
       printf("Please input 10 ingergers:\n ");
      for (i = 0; i < 10; i++)
          scanf("%d", &t[i]);
       for (tmp = 9; tmp >= 0; tmp--)
          printf("%2d", t[tmp]);
      printf("\n");
      return 0;
  }

