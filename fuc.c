#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
/* 要生成和返回随机数的函数 */
int * getRandom( )
{
  static int  r[10];
  int i;
 
  /* 设置种子 */
  srand( (unsigned)time( NULL ) );
  for ( i = 0; i < 10; ++i){
     r[i] = rand();
     printf( "r[%d] = %d\n", i, r[i]);
  }
 
  return r;
}

void test_rand(void)
{
    unsigned long n;
    srand((unsigned)time(NULL));
    for(int i = 0; i < 100; i++){
        n = rand();
        printf("d\n", n);
    }
}
 
/* 要调用上面定义函数的主函数 */
int main01 ()
{
   /* 一个指向整数的指针 */
   int *p;
   int i;
 
   p = getRandom();
   for ( i = 0; i < 10; i++ )
   {
       printf( "*(p + %d) : %d\n", i, *(p + i));
   }
 
   return 0;
}
//#include<stdio.h>
 
enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;
int main()
{
    // 遍历枚举元素
    for (day = MON; day <= SUN; day++) {
        printf("enum DAY %d \n", day);
    }
}