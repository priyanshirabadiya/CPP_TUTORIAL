// #include <stdio.h>
// int main()
// {
//     char str[20], temp;
//     int len = 0, i = 0, j;
//     printf("Enter string:");
//     scanf("%s", &str);
//     while (str[i] != '\0')
//     {
//         len++;
//         i++;
//     }
//     printf("Total len is: %d", len);
//     len = len - 1;
//     for (i = 0; i < len ; i++)
//     {
//         temp = str[i];
//         str[i] = str[len];
//         str[len--] = temp;
//     }
//     printf("\nRevesed string is: %s", str);
// }

// count vovels

// #include <stdio.h>
// int main()
// {
//     char str[20], temp;
//     int len = 0, i = 0, j, vovels = 0;
//     printf("Enter string:");
//     scanf("%s", &str);
//     while (str[i] != '\0')
//     {
//         len++;
//         i++;
//     }
//     printf("Total len is: %d", len);
//     for (i = 0; i < len; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//         {
//             vovels++;
//         }
//     }
//     printf("\nVovels are:%d", vovels);
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20], storestr[30];
//     int len, i, temp;
//     printf("Enter string:");
//     scanf("%s", &str);
//     strcpy(storestr, str);
//     len = strlen(str);
//     printf("\nlen string:%d", len);
//     len--;
//     for (i = 0; i < len; i++)
//     {
//         temp = str[i];
//         str[i] = str[len];
//         str[len--] = temp;
//     }
//     printf("\nstr is:%s", str);
//     printf("\nstr 2 is:%s", storestr);
//     if (strcmp(storestr, str) == 0)
//     {
//         printf("\nPalindrome string is.");
//     }
//     else
//     {
//         printf("\nNot Palindrome string is.");
//     }
//     return 0;
// }

// find substrings

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     int i, j, k, len;

//     // Input the string
//     printf("Enter a string: ");
//     scanf("%s", str);

//     len = strlen(str); // Calculate the length of the string

//     printf("Substrings of the string are:\n");

//     // Loop to generate all substrings
//     for (i = 0; i < len; i++) {
//         for (j = i; j < len; j++) {
//             // Print substring from index `i` to `j`
//             for (k = i; k <= j; k++) {
//                 printf("%c", str[k]);
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }

// Factorial of number

// #include <stdio.h>
// int fac(int n){
//     if(n == 0 || n == 1){
//         return 1;
//     }
//     return n * fac(n - 1);
// }
// int main()
// {
//     int n = 5;
//     printf("%d",fac(n));
//     return 0;
// }
