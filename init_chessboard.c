#include<stdio.h>
int main()
{
	int i,j;
	char C[8][8]; /*Maps all positions on a chessboard*/
	
	for(int i=0;i<=7;i++)	/*Initialising all Array Elements as NULL Characters*/
	{
		for(int j=0;j<=7;j++)
		{
			C[i][j]='\0';
		}
	}	 
	
	/*Initialising white player units (representation using upper-case letters*/
	C[0][0]=C[0][7]='R'; 
	C[0][1]=C[0][6]='H';
	C[0][2]=C[0][5]='B';
	C[0][3]='Q';
	C[0][4]='K';
	
	for(i=0;i<=7;i++)
	{
		C[1][i]='P';
	}
	
	/*Initialising black player units (representation using lower-case letters*/
	C[7][0]=C[7][7]='r';
	C[7][1]=C[7][2]='h';
	C[7][2]=C[7][5]='b';
	C[7][3]='k';
	C[7][4]='q';
	
	for(i=0;i<=7;i++)
	{
		C[6][i]='p';
	}
	
	/*Displaying the Chessboard*/
	printf("   1 2 3 4 5 6 7 8 ");
	for(i=0;i<=7;i++)
	{
		printf("\n   _ _ _ _ _ _ _ _ \n");
		printf("%d ",i+1);
		for(j=0;j<=7;j++)
		{
			printf("|");
			
			if(C[i][j]=='\0')
			{
				printf(" ");
			}
			
			else
			{
				printf("%c",C[i][j]);
			}
		}
		printf("| %d",i+1);
	}
	printf("\n   _ _ _ _ _ _ _ _ \n");
	printf("   1 2 3 4 5 6 7 8 ");
	printf("\n \n     CHESSBOARD \n");
	return 0;
}
