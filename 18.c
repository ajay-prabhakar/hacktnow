 #include <stdio.h>
     void main()
    {
 
        int i, j, b, n, num[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Give u r values \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &num[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (num[i] > num[j]) 
                {
 
                    b =  num[i];
                    num[i] = num[j];
                    num[j] = b;
                 
                 
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", num[i]);
 
    }
