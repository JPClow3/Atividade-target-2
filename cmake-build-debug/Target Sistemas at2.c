int main() {
    char str[100];
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    if (count > 0) {
        printf("A letra 'a' aparece %d vezes na string.\n", count);
    } else {
        printf("A letra 'a' nao aparece na string.\n");
    }

    return 0;
}