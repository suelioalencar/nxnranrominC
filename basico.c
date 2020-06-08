int entradamatrizint(int **numbers,int n,int m);
int **alocacaoint(int n, int m);
int imprimematrizint(int **matriz,int n,int m);
int **alocacaoint(int n, int m)
{
    int **matriz;
    int i;
    matriz = (int **)calloc(n,sizeof(int *));
    if(!matriz)
          return (NULL);
    for(i=0;i<n;i++)
	{
		matriz[i]=(int *)calloc(m,sizeof(int));
		if(!matriz[i])

            return (NULL);

    }
    return (matriz);
}
int imprimematrizint(int **matriz,int n,int m)
{
    int i,j;

        for (i=0;i<n;i++)
        {
            printf("\n");
            for(j=0;j<m;j++) printf("%d\t",matriz[i][j]);
            printf("\n");
        }
        return 0;

}
