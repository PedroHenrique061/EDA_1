#incluir < stdio.h>

main()
{
    ARQUIVO *fp;
    char ch;
    fp = fopen("arquivo1.txt", "r");
    enquanto(1)
    {
        ch = fgetc(fp);
        se(ch == EOF)
            quebrar;
        printf("%c", ch);
    }
    fclose(fp);
    retornar 0;
}