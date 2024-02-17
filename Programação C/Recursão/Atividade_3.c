
// 3. Implemente uma fun ̧c ̃ao recursiva respons ́avel por converte um n ́umero n na base decimal
// para bin ́aria.

#include <stdio.h>
#include <stdlib.h>

int conversor(int num){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        printf("1");
        return 0;
    }
    printf("%d", num%2);
    num = (int)num/2;
    conversor(num);
}

int main(){

    int num;

    printf("Digite 1 numeros: ");
    scanf("%d", &num);

    conversor(num);

    return 0;
}
