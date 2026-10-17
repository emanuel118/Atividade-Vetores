#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    printf("Soma: %d\n", soma);
    A[4] = 100;
    int i;
    for(i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }
    system("pause");
    return 0;
}

int main(){
    int vetor[6];
    int i;
    for(i = 0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Valores lidos:\n");
    for(i = 0; i < 6; i++){
        printf("%d\n", vetor[i]);
    }
    system("pause");
    return 0;
}

int main(){
    float origem[10], quadrado[10];
    int i;
    for(i = 0; i < 10; i++){
        printf("Digite um numero real: ");
        scanf("%f", &origem[i]);
        quadrado[i] = origem[i] * origem[i];
    }
    printf("Vetor original e quadrados:\n");
    for(i = 0; i < 10; i++){
        printf("Origem: %.2f | Quadrado: %.2f\n", origem[i], quadrado[i]);
    }
    system("pause");
    return 0;
}

int main(){
    int vetor[8];
    int i, x, y, soma;
    for(i = 0; i < 8; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Digite a posicao X (0 a 7): ");
    scanf("%d", &x);
    printf("Digite a posicao Y (0 a 7): ");
    scanf("%d", &y);
    soma = vetor[x] + vetor[y];
    printf("Soma dos valores: %d\n", soma);
    system("pause");
    return 0;
}

int main(){
    int vetor[10];
    int i, pares = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }
    printf("Quantidade de numeros pares: %d\n", pares);
    system("pause");
    return 0;
}

int main(){
    int vetor[10];
    int i, maior, menor;
    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    for(i = 1; i < 10; i++){
        if(vetor[i] > maior) maior = vetor[i];
        if(vetor[i] < menor) menor = vetor[i];
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    system("pause");
    return 0;
}

int main(){
    int vetor[10];
    int i, maior, posicao = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    for(i = 1; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("Maior elemento: %d na posicao: %d\n", maior, posicao);
    system("pause");
    return 0;
}

int main(){
    int vetor[6];
    int i;
    for(i = 0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Ordem inversa:\n");
    for(i = 5; i >= 0; i--){
        printf("%d\n", vetor[i]);
    }
    system("pause");
    return 0;
}

int main(){
    int vetor[6];
    int i = 0;
    while(i < 6){
        int num;
        printf("Digite um numero par: ");
        scanf("%d", &num);
        if(num % 2 == 0){
            vetor[i] = num;
            i++;
        }
    }
    printf("Pares na ordem inversa:\n");
    for(i = 5; i >= 0; i--){
        printf("%d\n", vetor[i]);
    }
    system("pause");
    return 0;
}

int main(){
    float notas[15];
    int i;
    float soma = 0;
    for(i = 0; i < 15; i++){
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("Media geral: %.2f\n", soma / 15);
    system("pause");
    return 0;
}

int main(){
    float vetor[10];
    int i, negativos = 0;
    float soma_positivos = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um numero real: ");
        scanf("%f", &vetor[i]);
        if(vetor[i] < 0){
            negativos++;
        }else if(vetor[i] > 0){
            soma_positivos += vetor[i];
        }
    }
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Soma dos positivos: %.2f\n", soma_positivos);
    system("pause");
    return 0;
}

int main(){
    float vetor[5];
    int i;
    float soma = 0, maior, menor;
    for(i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    maior = vetor[0];
    menor = vetor[0];
    for(i = 1; i < 5; i++){
        if(vetor[i] > maior) maior = vetor[i];
        if(vetor[i] < menor) menor = vetor[i];
    }
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", soma / 5);
    system("pause");
    return 0;
}

int main(){
    int vetor[5];
    int i, p_maior = 0, p_menor = 0;
    for(i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    for(i = 1; i < 5; i++){
        if(vetor[i] > vetor[p_maior]) p_maior = i;
        if(vetor[i] < vetor[p_menor]) p_menor = i;
    }
    printf("Posicao do maior: %d\n", p_maior);
    printf("Posicao do menor: %d\n", p_menor);
    system("pause");
    return 0;
}

int main(){
    int vetor[10];
    int i, j;
    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Valores repetidos:\n");
    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                printf("%d\n", vetor[i]);
            }
        }
    }
    system("pause");
    return 0;
}

int main(){
    int vetor[20], unico[20];
    int i, j, k = 0, repetido;
    for(i = 0; i < 20; i++){
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 20; i++){
        repetido = 0;
        for(j = 0; j < k; j++){
            if(vetor[i] == unico[j]) repetido = 1;
        }
        if(!repetido){
            unico[k] = vetor[i];
            k++;
        }
    }
    printf("Vetor sem repeticao:\n");
    for(i = 0; i < k; i++) printf("%d ", unico[i]);
    system("pause");
    return 0;
}

int main(){
    float vetor[5];
    int i, codigo;
    for(i = 0; i < 5; i++){
        printf("Digite um numero real: ");
        scanf("%f", &vetor[i]);
    }
    printf("Digite o codigo (0, 1 ou 2): ");
    scanf("%d", &codigo);
    if(codigo == 0){
        printf("Fim do programa.\n");
    }else if(codigo == 1){
        for(i = 0; i < 5; i++) printf("%.2f ", vetor[i]);
    }else if(codigo == 2){
        for(i = 4; i >= 0; i--) printf("%.2f ", vetor[i]);
    }else{
        printf("Codigo invalido!\n");
    }
    system("pause");
    return 0;
}

int main(){
    int vetor[10];
    int i;
    for(i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] < 0) vetor[i] = 0;
    }
    printf("Vetor modificado:\n");
    for(i = 0; i < 10; i++) printf("%d ", vetor[i]);
    system("pause");
    return 0;
}

int main(){
    int vetor[10];
    int i, x;
    for(i = 0; i < 10; i++){
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero X: ");
    scanf("%d", &x);
    printf("Multiplos de %d:\n", x);
    for(i = 0; i < 10; i++){
        if(vetor[i] % x == 0) printf("%d\n", vetor[i]);
    }
    system("pause");
    return 0;
}

int main(){
    int vetor[50];
    int i;
    for(i = 0; i < 50; i++){
        vetor[i] = (i + 5 * i) % (i + 1);
    }
    for(i = 0; i < 50; i++) printf("%d ", vetor[i]);
    system("pause");
    return 0;
}

int main(){
    int vetor1[10], vetor2[10];
    int i, k = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um numero entre 0 e 50: ");
        scanf("%d", &vetor1[i]);
        if(vetor1[i] % 2 != 0){
            vetor2[k] = vetor1[i];
            k++;
        }
    }
    printf("Vetores (2 por linha):\n");
    for(i = 0; i < 10; i += 2){
        printf("V1: %d, %d | V2: %d, %d\n", vetor1[i], vetor1[i+1], vetor2[i], vetor2[i+1]);
    }
    system("pause");
    return 0;
}

int main(){
    int mat[4][4];
    int i, j, maiores_10 = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > 10) maiores_10++;
        }
    }
    printf("Valores maiores que 10: %d\n", maiores_10);
    system("pause");
    return 0;
}

int main(){
    int mat[5][5];
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j) mat[i][j] = 1;
            else mat[i][j] = 0;
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}

int main(){
    int mat[4][4];
    int i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++) mat[i][j] = i * j;
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++) printf("%d\t", mat[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}

int main(){
    int mat[4][4];
    int i, j, maior, l = 0, c = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    maior = mat[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                l = i;
                c = j;
            }
        }
    }
    printf("Maior valor: %d na linha %d e coluna %d\n", maior, l, c);
    system("pause");
    return 0;
}

int main(){
    int mat[5][5];
    int i, j, x, achou = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Digite o valor X: ");
    scanf("%d", &x);
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(mat[i][j] == x){
                printf("Encontrado na linha %d e coluna %d\n", i, j);
                achou = 1;
            }
        }
    }
    if(!achou) printf("Nao encontrado\n");
    system("pause");
    return 0;
}

int main(){
    int mat1[4][4], mat2[4][4], mat3[4][4];
    int i, j;
    printf("Matriz 1:\n");
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++) scanf("%d", &mat1[i][j]);
    printf("Matriz 2:\n");
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++) scanf("%d", &mat2[i][j]);
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(mat1[i][j] > mat2[i][j]) mat3[i][j] = mat1[i][j];
            else mat3[i][j] = mat2[i][j];
        }
    }
    printf("Matriz 3:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++) printf("%d ", mat3[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}

int main(){
    int mat[10][10];
    int i, j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i < j) mat[i][j] = 2*i + 7*j - 2;
            else if(i == j) mat[i][j] = 3*(i*i) - 1;
            else mat[i][j] = 4*(i*i*i) - 5*(j*j) + 1;
        }
    }
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++) printf("%d\t", mat[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}

int main(){
    int mat[3][3];
    int i, j, soma = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
            if(j > i) soma += mat[i][j];
        }
    }
    printf("Soma acima da diagonal principal: %d\n", soma);
    system("pause");
    return 0;
}

int main(){
    int mat[3][3];
    int i, j, soma = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
            if(j < i) soma += mat[i][j];
        }
    }
    printf("Soma abaixo da diagonal principal: %d\n", soma);
    system("pause");
    return 0;
}

int main(){
    int mat[3][3];
    int i, j, soma = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
            if(i == j) soma += mat[i][j];
        }
    }
    printf("Soma da diagonal principal: %d\n", soma);
    system("pause");
    return 0;
}

int main(){
    int mat[3][3];
    int i, j, soma = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
            if(i + j == 2) soma += mat[i][j];
        }
    }
    printf("Soma da diagonal secundaria: %d\n", soma);
    system("pause");
    return 0;
}

int main(){
    int mat[3][3];
    int i, j;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) scanf("%d", &mat[i][j]);
    printf("Matriz Transposta:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++) printf("%d ", mat[j][i]);
        printf("\n");
    }
    system("pause");
    return 0;
}

int main(){
    int mat[4][4];
    int i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++) mat[i][j] = (rand() % 20) + 1;
    }
    printf("Matriz Original:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(j > i) mat[i][j] = 0;
        }
    }
    printf("\nMatriz Triangular Inferior:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}

int main(){
    int cartela[5][5];
    int i, j, k, num, repetido;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            do{
                num = rand() % 100;
                repetido = 0;
                for(k = 0; k < j; k++){
                    if(cartela[i][k] == num) repetido = 1;
                }
            }while(repetido);
            cartela[i][j] = num;
        }
    }
    printf("Cartela de Bingo:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++) printf("%2d ", cartela[i][j]);
        printf("\n");
    }
    system("pause");
    return 0;
}

int main(){
    char respostas[5][10], gabarito[10];
    int resultado[5] = {0};
    int i, j;
    for(i = 0; i < 5; i++){
        printf("Respostas do aluno %d:\n", i+1);
        for(j = 0; j < 10; j++) scanf(" %c", &respostas[i][j]);
    }
    printf("Gabarito:\n");
    for(j = 0; j < 10; j++) scanf(" %c", &gabarito[j]);
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            if(respostas[i][j] == gabarito[j]) resultado[i]++;
        }
    }
    for(i = 0; i < 5; i++) printf("Aluno %d pontos: %d\n", i+1, resultado[i]);
    system("pause");
    return 0;
}

int main(){
    char gabarito[10], resp[10];
    int mat, nota, i, j, aprovados = 0;
    printf("Gabarito:\n");
    for(j = 0; j < 10; j++) scanf(" %c", &gabarito[j]);
    for(i = 0; i < 3; i++){
        printf("Matricula: ");
        scanf("%d", &mat);
        nota = 0;
        for(j = 0; j < 10; j++){
            scanf(" %c", &resp[j]);
            if(resp[j] == gabarito[j]) nota++;
        }
        printf("Matricula: %d | Nota: %d\n", mat, nota);
        if(nota >= 7) aprovados++;
    }
    printf("Percentual de aprovacao: %.1f%%\n", (aprovados / 3.0) * 100);
    system("pause");
    return 0;
}

int main(){
    float notas[10][3];
    int i, p1 = 0, p2 = 0, p3 = 0;
    for(i = 0; i < 10; i++){
        scanf("%f %f %f", &notas[i][0], &notas[i][1], &notas[i][2]);
        if(notas[i][0] <= notas[i][1] && notas[i][0] <= notas[i][2]) p1++;
        else if(notas[i][1] <= notas[i][0] && notas[i][1] <= notas[i][2]) p2++;
        else p3++;
    }
    printf("Pior na P1: %d | Pior na P2: %d | Pior na P3: %d\n", p1, p2, p3);
    system("pause");
    return 0;
}

int main(){
    int mat[3][3];
    int vetor[3] = {0, 0, 0};
    int i, j;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++) scanf("%d", &mat[i][j]);
    for(j = 0; j < 3; j++){
        for(i = 0; i < 3; i++) vetor[j] += mat[i][j];
    }
    for(j = 0; j < 3; j++) printf("%d ", vetor[j]);
    system("pause");
    return 0;
}

int main(){
    int mat[5][4];
    int i, melhor_mat = 0;
    float maior_final = -1, soma_finais = 0;
    for(i = 0; i < 5; i++){
        scanf("%d %d %d", &mat[i][0], &mat[i][1], &mat[i][2]);
        mat[i][3] = mat[i][1] + mat[i][2];
        soma_finais += mat[i][3];
        if(mat[i][3] > maior_final){
            maior_final = mat[i][3];
            melhor_mat = mat[i][0];
        }
    }
    printf("Melhor matricula: %d\n", melhor_mat);
    printf("Media final: %.2f\n", soma_finais / 5);
    system("pause");
    return 0;
}

int main(){
    float mat[3][6];
    int i, j;
    float soma_impares = 0, soma_med = 0;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 6; j++) scanf("%f", &mat[i][j]);
    for(i = 0; i < 3; i++)
        for(j = 0; j < 6; j += 2) soma_impares += mat[i][j];
    for(i = 0; i < 3; i++)
        soma_med += mat[i][1] + mat[i][3];
    for(i = 0; i < 3; i++)
        mat[i][5] = mat[i][0] + mat[i][1];
    printf("Soma colunas impares: %.2f\n", soma_impares);
    printf("Media colunas 2 e 4: %.2f\n", soma_med / 6);
    system("pause");
    return 0;
}