#include <stdio.h>
#include <stdbool.h>
int main()
{
  // If an array contains n elements , then check if the given array is a palindrome or not
  int n;
  printf("Enter number of elements in the array : ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i <= n - 1; i++) 
  {
    printf("Enter element %d : ", i + 1);
    scanf("%d", &arr[i]);
  } 
  bool value = true ;
  for(int i=0, j=n-1; i<j; i++,j--){
    if(arr[i] == arr[j]) {
      value = true ;
      continue;
    }
    else {
      value = false ;
      break;
    }
  } 
  if(value == true) printf("The given array is a palindrome");
  else printf("The given array is not a palindrome");

  return 0;
} 