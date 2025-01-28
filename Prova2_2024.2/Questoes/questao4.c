int Q4(char *vet, int tam){
    int i, j, pcont=0;
    char aux;
    for ( i = 0; i < tam; i++){
        for(j = i+1; j < tam; j++)
            if(vet[i] < vet[j]){
                aux = vet[i]; vet[i] = vet[j]; vet[j] = aux; pcont++;
            }
}
return pcont;
}
int main(){
    char nc[] = "pedro";
    int res = Q4(nc, 5); // primeiro nome, qtd de letras 1o nome;
    printf("\n\nresposta = %d\n\nnc = %s\n\n", res, nc);
}