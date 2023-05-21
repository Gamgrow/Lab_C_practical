#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  // claculating length
  int new_num = n;
  int length = 0;
  for(int i=n; i>0 ; i /=10){
    length++;
  }

  // calculate sum
  int new_num2 = n;
  int sum = 0;
  
  for(int i=n; i>0; i /=10){
    int last_digit = i%10;
    sum += pow(last_digit,length);
  }

  if (sum == n)
  {
    printf("%d is an armstrong number ", n);
  }
  else
  {
    printf("%d is not an armstrong number", n);
  }
}
