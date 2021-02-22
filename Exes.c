//
// Created by Vasques on 17/02/2021.
// Copiem uma alinea de cada vez, pode haver conflito entre variaveis com a mesma designação
#include <stdio.h>
//Ex 1.2
/*int main() {
    //1
    float preco;
    printf("Insira o preço do que deseja comprar: ");
    scanf("%f",& preco);
    int nota = 0;
    int moeda = 0;
    float troco = 100 - preco;
    while (troco > 0.00) {
        if (troco >= 50) {troco -= 50;nota++;printf("Nota de 50\n");}
        else if (troco >= 20) {troco -= 20;nota++;printf("Nota de 20\n");}
        else if (troco >= 10) {troco -= 10;nota++;printf("Nota de 10\n");}
        else if (troco >= 5) {troco -= 5;nota++;printf("Nota de 5\n");}
        else if (troco >= 2) {troco -= 1;moeda++;printf("Moedas de 2\n");}
        else if (troco >= 1) {troco -= 1;moeda++;printf("Moedas de 1\n");}
        else if (troco >= 0.5) {troco -= 0.5;moeda++;printf("Moedas de 0.5\n");}
        else if (troco >= 0.2) {troco -= 0.2;moeda++;printf("Moedas de 0.2\n");}
        else if (troco >= 0.1) {troco -= 0.1;moeda++;printf("Moedas de 0.1\n");}
        else if (troco >= 0.05) {troco -= 0.05;moeda++;printf("Moedas de 0.05\n");}
        else if (troco >= 0.01) {troco -= 0.01;moeda++;printf("Moedas de 0.01\n");}
    }
    printf("Numero de notas utilizadas:%d\nNumero de moedas utilizadas:%d",nota,moeda);

    //2
    float fahrenheit, graus;
    printf("Introduza um valor em graus fahrenheit:");
    scanf("%f",&fahrenheit);
    graus = (fahrenheit-32) * 5/9;
    printf("O valor introduzido em graus é: %.2f",graus);
}*/


//Ex 2.1
/*int main() {
    int num1,num2,num3,m,s;
    printf("Introduza um numero:");
    scanf("%d",& num1);
    //1
    if(num1%2){printf("O numero é impar");}
    else{printf("O 1º numero é par");}
    printf("Introduza um numero:");
    scanf("%d",& num2);
    printf("Introduza um numero:");
    scanf("%d",& num3);
    //2 adicionar ao 1
    if(num1>num2 && num1>num3){printf("%d",num1);}
    else if(num2>num1 && num2>num3){printf("%d",num2);}
    else if(num3>num1 && num3>num2){printf("%d",num3);}
    //3 adicionar ao 1
    if(num1%2){if(num2%2){m=num1*num2;printf("%d",m);}else{printf("%d",num1);}}
    else{if(num2%2){printf("%d",num2);}else{s=num1+num2;printf("%d",s);}}
}*/


//Ex 2.2
/*int main() {
    //1
    int idade;
    printf("Insira a sua idade:");
    scanf("%d",& idade);
    if (idade>=61){printf("Isento de pagamento");}
    else if(idade>=49){printf("Bilhete Light");}
    else if(idade>=37){printf("Bilhete normal");}
    else if(idade>=25){printf("Bilhete Light");}
    else if(idade>=13){printf("Bilhete radical");}
    else{printf("Isento de pagamento");}



    //2
    int hora,min,c;
    printf("Insira as horas no formato hh:mm.\n");
    scanf("%02d:%02d",& hora,& min);
    if(hora>=12){c=hora-12;printf("%d:%d pm",c,min);}
    else{printf("%d:%d am",hora,min);}



    //3
    int nota;
    printf("Escreva a nota do aluno:");
    scanf("%d",& nota);
    if (nota<=9){printf("Insuficiente");}
    else if (nota<=13){printf("Suficiente");}
    else if (nota<=16){printf("Bom");}
    else{printf("Excelente");}



    //4
    int dia,mes;
    printf("Insira o dia e mes no formato dd/mm:\n");
    scanf("%02d/%02d",&dia,&mes);
    if(mes>=3 && mes <6){
        if(mes==3 && dia<20){printf("Inverno");}
        else{printf("Primavera");}
    }
    else if(mes>=6 && mes<9){
        if(mes==6 && dia<21){printf("Primavera");}
        else{printf("Verão");}
    }
    else if(mes>=9 && mes<12) {
        if (mes == 9 && dia < 22) { printf("Verão"); }
        else{printf("Outono");}
    }
    else if(mes==12 && dia <21){printf("Outono");}
    else{printf("Inverno");}


    //5
#include<time.h>
    //srand para os numeros random não serem sempre os mesmos
    srand(time(0));
    int dif;
    //rand%7  para gerar um numero aleatorio de 1-6
    int num1= rand()%6+1;
    int num2=rand()%6+1;
    dif=num1-num2;
    printf("Num1:%d\nNum2:%d\n",num1,num2);
    printf("Diferença:%d\n",dif);
    if(dif<2){printf("A diferença é inferior a 2\n");}
    if(dif<4){printf("A diferença é inferior a 4\n");}
    if(dif>3){printf("A diferença é superior a 3\n");}



    //6
    int num;
    printf("Escreva o numero do mês:");
    scanf("%d",&num);
    char mes[1][12]={"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    if(num>=13||num<=0){printf("O numero que introduziu não corresponde a nenhum mês");}
    else{for(int i=1;i<13;i++){if((i)==num){printf("%s",mes[i]);}}}



    //7
    int lados;
    printf("Insira o numero de lados(max=20): ");
    scanf("%d",& lados);
    char item[1][20]={"Não Existe","Não Existe","Triângulo","Quadrilátero","Pentágono","Hexágono","Octógono","Eneágono","Undecágono","dodecágono","tridecágono","tetradecágono","pentadecágono","hexadecágono","heptadecágono","octodecágono","eneadecágono","icoságono"};
    for(int i=1;i<21;i++){if((i)==lados){printf("O poligono é um %s",item[i]);}}
}*/


//Ex2.3
/*int main() {
    //1
    char um[]="1";
    char dois[]="0";
    char num[20];
    printf("Insira os 4 numeros originais:");
    scanf("%s",& num);
    if(strlen(num)==4){
    int cont=0;
    for (int i = 0; i < strlen(num); i++) {
        cont+=num[i]-'0';}
    if(cont%2){strncat(num,&um,1);}
    else{strncat(num,&dois,1);}
    printf("Cartão: %s \n",num);}
    else{printf("Erro nos numeros do cartão");}

    //2
    //Fev 2005/2006->28
    int dia,ano,mes;
    char* meses[13][20]={{"Janeiro",31},{"Fevereiro",28},{"Março",31},{"Abril",30},{"Maio",31},{"Junho",30},{"Julho",31},{"Agosto",31},{"Setembro",30},{"Outubro",31},{"Novembro",30},{"Dezembro",31}};
    printf("Insira o dia e mes no formato dd/mm/aa:");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    for(int i=0;i<12;i++){if((i+1)==mes&&dia==meses[i][1]){mes++;dia=1;if(mes==12){ano++;}}else{dia++;break;}}
    printf("%d de %s de %d",dia,meses[mes-1][0],ano);
}*/


//Ex3.1
 /*int main() {
    //1
    int x,cont;
    printf("Insira o numero[Este numero não estara incluido na soma]:");
    scanf("%d",&x);
    for(int i=0;i<x;i++){cont+=i;}
    printf("%d",cont);


    //2
    int x,cont,i;
    printf("Indique um numero limite: ");
    scanf("%d",&x);
    while(cont<=x){i++;cont+=i;}
    printf("%d",cont);


    //3
    int num,x;int maior=0;
    printf("Quantos elementos quer adcionar:");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
    printf("Número:");
    scanf("%d",&num);
    if(num>maior){maior=num;}}
    printf("%d",maior);


    //4
    int num,x;
    printf("Insira o numero:");
    scanf("%d", &num);
    for(int i=0;i<101;i++){
        if(i%num==0){printf("%d, ",i);x++;if(x==4){break;}}
    }


    //5
    #include <string.h>
    for(int j=0;j<5;j++){
        for(int i=0;i<j;i++){
            printf("*");
        }
    printf("\n");
    }
}*/


//Ex3.2
/*int main() {
    //1
    int f=-50;
    float celsius;
    while(f<200){celsius=(f-32)/1.8;printf("%f\n",celsius);f+=5;}

    //2 Para numeros com maximo 2 digitos
    int linhas, i, j,espaçamento, num = 1;
    printf("Introduza o numero de linhas: ");
    scanf("%d", &linhas);
    for (i = 1; i <= linhas; i++) {
        for(espaçamento=1;espaçamento<=linhas-i;espaçamento++){printf("  ");}
        for (j = 1; j <= i; ++j) {printf("%2d  ", num);++num;}
        printf("\n");}


    //3
    char ope;
    int num;
    printf("Escolha uma das operações(+,-,*,/):");
    scanf("%c",& ope);
    printf("Numero:");
    scanf("%d",& num);
    for (int i = 0; i <= 10; ++i) {
        float res=0;
        if(ope=='+'){res=num+i;}
        else if(ope=='-'){res=num-i;}
        else if(ope=='*'){res=num*i;}
        else if(ope=='/'){res=num/i;}
        printf("%2d + %2d = %.2f\n",num,i,res);
    }
    //4
        int mult,mult1,x,y;
    printf("Introduza o 1 numero: ");
    scanf("%d",&x);
    printf("Introduza o 2 numero: ");
    scanf("%d",&y);
    for (int i = 1; i < 11; ++i) {
        mult=x*i;
        for (int j = 1; j <11 ; ++j) { mult1=y*j;if(mult==mult1){break;}}
        if(mult==mult1){break;}}
    printf("O minimo multiplo comum de %d e %d é: %d",x,y,mult);


    //5
    int x,y;
    printf("Introduza os numeros no formato (x/y): ");
    scanf("%d/%d",&x,&y);
    int resto=x%y;
    int divisao=x/y;
    while (resto!=0){
        x=y;
        y=resto;
        divisao=x/y;
        resto=x%y;
        printf("%d/%d = %d resto %d\n",x,y,divisao,resto);
    }
    printf("O maior divisor comum dos numeros é: %d",y);


    //6
    #include <string.h>
    char num[20];
    int cont;
    printf("Insira os numeros, maximo 20 digitos: ");
    scanf("%s",& num);
    for (int i = 0; i < strlen(num); i++) {
        cont+=num[i]-48;}
    printf("%d",cont);

    //7
    int numinf, numsup, num;
    int x = 1;
    int dig = 10;
    printf("Introduza o intervalo no formato (min/max):");
    scanf("%d/%d", &numinf, &numsup);
    while (dig >= 9) {
        x *= 10;
        dig = numsup / x;
    }
    for (int i = numinf; i <= numsup; ++i) {
        int cont = 0;
        for (int j = 1; j <= x; j *= 10) {
            num = (i / j) % 10;
            if (num == 6) { cont++; }
        }
        if (cont == 2) { printf("%d é um numero bissexto\n", i); }
    }

    //8
        int count, dias;
    char primeirodia[20];
    char *semana[7] = {"domingo","segunda-feira","terça-feira","quarta-feira","quinta-feira","sexta-feira","sabado"};
    printf("nº de dias: ");
    scanf("%d", &dias);
    printf("1º dia: ");
    scanf("%s", primeirodia);
    for (int i = 0; i < 7; ++i) {
        //printf("%s|%s\n", primeirodia,semana[i][0]);
        if (strcmp(primeirodia, semana[i]) == 0) { count = -i; }
    }
    printf("------------------------------------\n");
    printf("|  D |  S |  T |  Q |  Q |  S |  S |\n");
    printf("------------------------------------\n");
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 7; ++j) {
            count++;
            if ((count <= 0) || (count > dias)) { printf("|    "); }
            else { printf("| %2d ", count); }
        }
        printf("|\n------------------------------------\n");

    }


    //9
    #include<time.h>
    int num,x,y;
    srand(time(0));
    printf("Insira o intervalo no formato (x/y):");
    scanf("%d/%d",&x,&y);
    int random= rand()%y+x;
    for (int i = 3; i >= 0; --i) {
        printf("Possui %d tentativas.\nInsira outro numero:",i);
        scanf("%d",&num);
        if(num>random){printf("O numero aleatorio é menor " );}
        if(num<random){printf("O numero aleatorio é maior " );}
        else{printf("Ganhou!!");break;}
    }

}*/
