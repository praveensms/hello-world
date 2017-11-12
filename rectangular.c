#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r,c,i,j,k,q,x1,y1,x2,y2,p;
	scanf("%d %d",&r,&c);
	int ch[r][c],cell[r][c];
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			scanf("%d",&ch[i][j]);
		}
	}
	scanf("%d",&q);
	int final[q],sum=0;
	
	for (i=0; i<q; i++)
	{
		for (j=0; j<c; j++)
		{
			scanf("%d",&cell[i][j]);
		}
	}
	for (i=0; i<q; i++)
	{	
		int col = 0;
		x1 = cell[i][col++];
		y1 = cell[i][col++];
		x2 = cell[i][col++];
		y2 = cell[i][col++];
		{
			for (k=x1; k<=x2; k++)
			{
				for (j=y1; j<=y2; j++)
				{
					sum = sum + ch[k-1][j-1];
				}
			}
		}
		final[i] = sum;
		sum = 0;
	}
	for(i=0; i<q; i++)
	{
		printf("%d\n",final[i]);
	}
}
