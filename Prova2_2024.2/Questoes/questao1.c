int Q1(char *Nome, int qtde)
{
    int i = 0;
    if (*Nome == '\0')
        return qtde;
    while (Nome[i] != '\0')
        i++;
    return Q1(Nome + 1, qtde + i);
}
int main(){
    printf("%d\n", Q1("pedro", 0)); 
}