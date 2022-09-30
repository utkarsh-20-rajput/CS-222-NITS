/**************************
 Code to check the validity
 of a given IP address in C
 2115066
 **************************/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 100

//Function to check if the character is a number
int validate_number(char *str) {


   while (*str) {
      if(!isdigit(*str)){
         return 0;
      }
      str++;
   }
   return 1;
}

//Checking validity
int validate_ip(char *ip) {
   int i, num, dots = 0;
   char *ptr;
   if (ip == NULL)
      return 0;
      ptr = strtok(ip, ".");
      if (ptr == NULL)
         return 0;
   while (ptr) {
   //Checking the data type of substring
      if (!validate_number(ptr))
         return 0;
         num = atoi(ptr);
         if (num >= 0 && num <= 255) {
            ptr = strtok(NULL, ".");
            if (ptr != NULL)
               dots++;
         } else
            return 0;
    }

//If the number of dots are not 3 the the IP address is invalid
    if (dots != 3)
       return 0;
      return 1;
}


int main() {
   char ip1[N];
  printf("Enter the IP Address (IP-1)\n");
  scanf("%s",&ip1);
   char ip2[N];
   printf("Enter the IP Address (IP-2)\n");
  scanf("%s",&ip2);
   validate_ip(ip1)? printf("IP-1 Valid\n"): printf("IP-1 Not valid\n");
   validate_ip(ip2)? printf("IP-2 Valid\n"): printf("IP-2 Not valid\n");

  return 0;
}