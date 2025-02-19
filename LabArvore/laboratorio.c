
typedef struct
{
    char name[100];
    int age;
} TPessoa;

typedef struct TABPNo
{
    int age;
    int index; 
    struct TABPNo *left;
    struct TABPNo *right;
} TABPNo;

TABPNo *alocaNo(TABPNo *root, int age, int index)
{

    if (root == NULL)
    {
        TABPNo *novoNo = (TABPNo *)malloc(sizeof(TABPNo));
        novoNo->age = age;
        novoNo->index = index;
        novoNo->left = NULL;
        novoNo->right = NULL;
        return novoNo;
    }

    if (age < root->age)
    {
        root->left = alocaNo(root->left, age, index);
    }
    else if (age > root->age)
    {
        root->right = alocaNo(root->right, age, index);
    }

    return root;
}

TABPNo *Fill(TPessoa dataset[], int qtReistros)
{
    TABPNo *root = NULL;
    dataCount = 0;
    for (int i = 0; i < qtReistros; i++)
        
    {
        Data[i] = dataset[i];
        root = AlocaNo(root, Data[i].age, i);
        dataCount++;
    }
    return root;
}

void PrintRelatorio(TABPNo* root) {
    if (root == NULL) {
        return;
    }

    PrintRelatorio(root->left);

    printf("Idade: %d, Nome: %d\n", root->age, Data[root->index].name);

    PrintRelatorio(root->right);
}

TABPNo* Busca(TABPNo* root, int age) {
    while (root != NULL) {
        if (root->age == age) {
            return root; 
        } else if (age < root->age) {
            root = root->left; 
        } else {
            root = root->right; 
        }
    }
    return NULL;
}

#include <stdlib.h>

int DesalocaABP(TABPNo* root) {
    if (root == NULL) {
        return 0;
    }

    int leftCount = DesalocaABP(root->left);
    int rightCount = DesalocaABP(root->right);

    free(root);

    return leftCount + rightCount + 1;
}


int main()
{
    TABPNo *No, root;
    int Idade, QtNosDesalocados;
    char FonteDados;
    scanf("%c", &FonteDados);
    root = Fill(FonteDados);
    scanf("%d", &Idade);
    PrintRelatorio(root);
    No = Busca(root, Idade);
    QtNosDesalocados = DesalocaABP(root);
    return 0;
}