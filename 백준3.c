#백준 #basic programming #No.3

#2588
세 자리 수 나눗셈 알고리즘 (세 자리 수 중에서 십의 자리, 백의 자리를 도출해내는 수학적 사고력이 어려웠음)
#include <stdio.h>
 
int main(void)
{
  int result;
  int num1, num2;

  scanf("%d %d", &num1, &num2);

printf("%d\n",num1*(num2%10));
printf("%d\n", num1*(num2%100/10));
printf("%d\n", num1*(num2/100));
result=num1*num2;

printf("%d\n",result);

  return 0;
}

#7287
자신이 백준 온라인 저지(BOJ)에서 맞은 문제의 수와 아이디를 그대로 출력하는 프로그램을 작성하시오.
#include <stdio.h>
 
int main(void)
{
  printf("%d\n",11);
  printf("%s","cwpink");
  
  return 0;
}


#1330
두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

#include <stdio.h>
 
int main() {
  int A, B;

  scanf("%d %d\n",&A,&B);

  if(A>B)
    printf(">\n");
    else if(A<B)
    printf("<\n");

  else
    printf("==\n");

  return 0;
  }
  
  
  #9488
 시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

  #include <stdio.h>

int main (void) {
 
  int A,B,C,D,F,n;
  scanf("%d", &n); 

  if(n>=90)
    {
      printf("A");
    }

  else if(n>=80)
    {
      printf("B");
    }
  else if(n>=70)
    {
      printf("C");
    }
  else if(n>=60)
    {
      printf("D");
    }
  else
    {
      printf("F");
    }
    
    return 0;

}

#2753(삼항연산자 문제)
연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.

윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.

예를 들어, 2012년은 4의 배수이면서 100의 배수가 아니라서 윤년이다. 1900년은 100의 배수이고 400의 배수는 아니기 때문에 윤년이 아니다. 하지만, 2000년은 400의 배수이기 때문에 윤년이다.

#include <stdio.h>

int main (void) {
 
  int n;
  scanf("%d", &n); 

  if(n%4==0 && n%100!=0 || n%400==0)

    {
      printf("1\n");
    }

  else
    {
      printf("0\n");
    }
    
    return 0;

}

