/* Criando uma cópia de arquivo */
#incluir < stdio.h>
main()
{
    ARQUIVO *fOriginal, *fCopia;
    char ch;
    fOriginal = fopen("Arquivo1.txt", "r");
    se(fOriginal == NULL)
    {
        puts("Não foi possível abrir o arquivo!!!");
        saída(0);
    }
    fCopia = fopen("Copia_Arquivo1.txt", "w");
    se(fCopia == NULL)
    {
        puts("Não foi possível gravar o arquivo!!!");
        saída(0);
    }
    enquanto(1)
    {
        ch = fgetc(fOriginal);
        se(ch == EOF)
            quebrar;
        fputc(ch, fCopia);
    }
    fclose(fOriginal);
    fclose(fCopia);
    retornar 0;
}