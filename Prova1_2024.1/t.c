int Q1 (int matricula){
    int n, retorno = 0;
    while (matricula!=0)
    {
        n = matricula % 10; 
        retorno = retorno * 10 + n;
        matricula /= 10 ;
    }
   return retorno; 
} 

int main (){
    int mat = 202015868;
    int res = Q1(mat);
    printf("%d", res );
    return 0;
} 