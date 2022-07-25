#include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=1; i<=row; i++){
    for(int j=1; j<=row; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

//output
enter the element:5
*****
*****
*****
*****
*****


#include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=1; i<=row; i++){
    for(int j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

//output
enter the element:5
*
**
***
****
*****


#include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=row; i>=1; i--){
    for(int j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

//output
enter the element:5
*****
****
***
**
*


#include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=1; i<=row; i++){
    for(int j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
  for(int i=row-1; i>=1; i--){
    for(int j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}

//output
enter the element:5
*
**
***
****
*****
****
***
**
*


#include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=1; i<=row; i++){
    for(int space=1; space<=row-i; space++){
      printf(" ");
    }
    for(int j=1; j<=i; j++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

//output
enter the element:5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
  
  

#include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=row; i>=1; i--){
    for(int space=1; space<=row-i; space++){
      printf(" ");
    }
    for(int j=1; j<=i; j++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

//output
enter the element:5
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
  
  
  #include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=1; i<=row; i++){
    for(int space=0; space<=row-i; space++){
      printf(" ");
    }
    for(int j=1; j<=i; j++){
      printf("* ");
    }
    printf("\n");
  }
  for(int i=row-1; i>=1; i--){
    printf(" ");
    for(int space=1; space<=row-i; space++){
      printf(" ");
    }
    for(int j=1; j<=i; j++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}

//output

enter the element:5
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
  * * * * 
   * * * 
    * * 
     * 
  
  
  #include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=1; i<=row; i++){
    for(int j=1; j<=i; j++){
      printf("%c",64+j);
    }
    printf("\n");
  }
  return 0;
}

//output
enter the element:5
A
AB
ABC
ABCD
ABCDE


#include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=row; i>=1; i--){
    for(int j=1; j<=i; j++){
      printf("%c",64+j);
    }
    printf("\n");
  }
  return 0;
}

//output
enter the element:5
ABCDE
ABCD
ABC
AB
A


#include <stdio.h>

int main(void) {
  int row;
  printf("enter the element:");
  scanf("%d",&row);
  for(int i=1; i<=row; i++){
    for(int j=1; j<=i; j++){
      printf("%c",64+i);
    }
    printf("\n");
  }
  return 0;
}

//output

enter the element:5
A
BB
CCC
DDDD
EEEEE
