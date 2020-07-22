# ----
/*这是一个有关于数组的复习题库
输入10个整数到数组t中(数组长度为偶数)，将数组t中的数组元素倒置，输出倒置以后的数组t。例如：

数组t中10个数组元素依次为1、3、5、7、9、8、6、4、2、0，倒置以后10个数组元素依次为0、2、4、6、8、9、7、5、3、1。已知变量声明和数组声明为”int i, tmp, t[10];”,要求不再声明其他的变量或数组。*/
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

