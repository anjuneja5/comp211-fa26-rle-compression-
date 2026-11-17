#include <stdio.h>
#include <string.h>

void compress(char str[]) {
    int count = 1;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (i + 1 < len && str[i] == str[i + 1]) {
            count++;
        } else {
            printf("%d%c", count, str[i]);
            count = 1;
        }
    }

    printf("\n");
}

int main() {
    char text1[] = "AAAABBBCC";
    char text2[] = "AAAAAAAAAA";
    char text3[] = "ABCDEF";
    char text4[] = "AABBCCDDEE";
    char text5[] = "AAAAABBBBBCCCCCDDDDD";

    printf("Example 1:\n");
    printf("Original: %s\n", text1);
    printf("Compressed: ");
    compress(text1);

    printf("\nExample 2:\n");
    printf("Original: %s\n", text2);
    printf("Compressed: ");
    compress(text2);

    printf("\nExample 3:\n");
    printf("Original: %s\n", text3);
    printf("Compressed: ");
    compress(text3);

    printf("\nExample 4:\n");
    printf("Original: %s\n", text4);
    printf("Compressed: ");
    compress(text4);

    printf("\nExample 5:\n");
    printf("Original: %s\n", text5);
    printf("Compressed: ");
    compress(text5);

    return 0;
}
