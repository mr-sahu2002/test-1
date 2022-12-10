// #include <stdio.h>
// void main()
// {
//     // Read input as specified in the question.
//     // Print output as specified in the question.
//     // Write your code here

//     int N, max;
//     int a[20];

//     printf("enter the number of clubs\n");
//     scanf("%d", &N);

//     printf("enter the number of members in club\n");
//     for (int i = 0; i <= N; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i <= N; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//     }
//     printf("%d", max);
// }

// #include <stdio.h>
// void main()
// {
//     // Read input as specified in the question.
//     // Print output as specified in the question.
//     // Write your code here

//     int N, temp;
//     int a[10];

//     printf("enter the number of clubs\n");
//     scanf("%d", &N);

//     if (2 <= N <= 200000)
//     {
//         printf("enter the number of members in club\n");
//         for (int i = 0; i < N; i++)
//         {
//             if (1 <= a[i] <= 2000000)
//                 scanf("%d\n", &a[i]);
//         }
//     }

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = i + 1; j < N; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < N; i++)
//         printf("%d\n", a[i]);
// }

////////////////////////////////////// final but wrong solution for code 1//////////////////////////
// #include <stdio.h>
// void main()
// {
//     // Read input as specified in the question.
//     // Print output as specified in the question.
//     // Write your code here
//     int N;
//     int a[N];

//     printf("enter the number of clubs\n");
//     scanf("%d", &N);

//     int min = a[0];
//     if (2 <= N <= 200000)
//     {
//         printf("enter the number of members in club\n");
//         for (int i = 0; i < N; i++)
//         {
//             if (1 <= a[i] <= 2000000)
//                 scanf("%d\n", &a[i]);
//         }
//     }

//     for (int i = 0; i < N; i++)
//     {
//         if (min > a[i])
//             min = a[i];
//     }

//     for (int i = 0; i < N; i++)
//     {
//         if (a[i] % min == 0)
//             min = +min;
//     }
//     printf("%d", min);
// }

