#include<stdio.h>
int main()
{	int N;
	scanf("%d",&N);
	int L[N],U[N],i,A[N],j;
	int R[N];
	for(i=0;i<N;i++)
	{
		scanf("%d%d",&L[i],&U[i]);
		A[i]=U[i]-L[i];
	}
	for(i=0;i<N;i++)
	{   R[i]=0;
		for(j=0;j<N;j++)
		{
			if(A[i]>A[j])
			{
				R[i]=R[i]+2;
			}
			else
			{
				R[i]=R[i]+0;
			}

		}
		
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",R[i]);
	}
}