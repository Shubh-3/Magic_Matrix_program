#include <stdio.h>

void magicmatrix(int n)
{
	int a[100][100];
	int con;
	int i = n / 2;
	int j = n - 1;

	for (con = 1; con <= n * n;) {
		if (i == -1 && j == n)
		{
			j = n - 2;
			i = 0;
		}
		else {

			if (j == n)
			{
				j = 0;
			}
			if (i < 0)
			{
				i = n - 1;	
			}
		}
		if (a[i][j])
		{
			j -= 2;
			i++;
		}
		else{
			a[i][j] = con++;
		}
		j++;
		i--;
	}


	printf("Magic matrix %d * %d \n",n,n);
	for (i = 0; i < n; i++) {
		
		for (j = 0; j < n; j++){
			printf("%3d ", a[i][j]);
		}
		
		printf("\n");
	}
}


int main()
{
	int n,i,j;
	int count = 0;
	int s[100][100];
	printf("Enter number N (N must be Positive and Greater than 1 and also Odd):");
    scanf("%d",&n);
    if(n > 0)
    {
        if(n % 2 == 0)
        {
            printf("Enter Odd number");
        }
        else
		{
			printf("sinple matrix %d * %d \n",n,n);
            for(i = 0; i < n; i++)
     		{
     			for (j= 0; j < n; j++)
     			{
     				s[i][j] = count++;
     				printf("%d ",count);
     			}
     			printf("\n");
     		}
     		printf("\n\n");
     		
     		printf("Sum of each row and column: %d\n\n", n*(n*n+1)/2);
			//magic matrix logic
        	magicmatrix(n);
		}
    }
    else
    {
    	printf("Enter number posive and greater than 1");
	}
	
}

