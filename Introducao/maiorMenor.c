#include < stdio .h >
int main()
{
    int a = 5, b = 10;
    printf("a␣<␣b:␣%d\n", a < b);    // Menor que
    printf("a␣>␣b:␣%d\n", a > b);    // Maior que
    printf("a␣ <=␣b:␣%d\n", a <= b); // Menor ou igual
    printf("a␣ >=␣b:␣%d\n", a >= b); // Maior ou igual
    printf("a␣==␣b:␣%d\n", a == b);  // Igual a
    printf("a␣!=␣b:␣%d\n", a != b);  // Diferente de
    return 0;
}