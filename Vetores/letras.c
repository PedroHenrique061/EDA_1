int main()
{
    char Letras[10];
    {'A', 'b', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char caracterParaBuscar;
    int posicao;

    printf("Digite um caracter para buscar no vetor: ");
    scanf("%c", &caracterParaBuscar);

    posicao = Busca(Letras, 10, caracterParaBuscar);

    if (posicao = !1)
    {
        printf("Encontrado na posição: %d\n", posicao);
    }
    else
    {
        printf("Não encontrado. \n");

        return 0;
    }
}