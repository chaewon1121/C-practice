#백준 #basic programming #No.2

#10998
두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d %d", &A,&B);
    printf("%d\n",A*B);
    return 0;
}

#1008
두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int A,B;
    scanf("%d %d",&A,&B);
    printf("%.10lf\n",(double)A/B);
    return 0;
}

#10172
아래 예제와 같이 개를 출력하시오.

#include <stdio.h>
 
int main() {
    printf("|\\_/|\n");
    printf("|q p|   /}\n");
    printf("( 0 )\"\"\"\\\n");
    printf("|\"^\"`    |\n");
    printf("||_/=\\\\__|\n");
    return 0;
}

#10869
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
#include <stdio.h>
 
int main(void)
{
  int A,B;
  scanf("%d %d",&A,&B);
  printf("%d\n",A+B);
  printf("%d\n",A-B);
  printf("%d\n",A*B);
  printf("%d\n",A/B);
  printf("%d\n",A%B);
}

#10430
(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?

(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?

세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

#include <stdio.h>
 
int main(void)
{
  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  printf("%d\n",(A+B)%C);
  printf("%d\n",((A%C) + (B%C))%C);
  printf("%d\n",(A*B)%C);
  printf("%d\n",((A%C) * (B%C))%C);
}



