//
// Created by Vasques on 17/02/2021.
// Copiem uma alinea de cada vez, pode haver conflito entre variaveis com a mesma designação
#include <stdio.h>
//Ex 1.2
/*int main() {
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
    //2
    if(num1>num2 && num1>num3){printf("%d",num1);}
    else if(num2>num1 && num2>num3){printf("%d",num2);}
    else if(num3>num1 && num3>num2){printf("%d",num3);}
    //3
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
    //rand%7  para gerar um numero aleatorio de 0-6
    int num1= rand()%7;
    int num2=rand()%7;
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
    //1, não sei se isto era o pretendido
#include <string.h>
    int cartoes;
    printf("Insira o numero de cartões que quer criar:");
    scanf("%d",&cartoes);
    char um[]="1";
    char dois[]="0";
    char num[20];
    printf("Insira os 4 numeros originais:");
    scanf("%s",& num);
    for(int j=1;j<(cartoes+1);j++) {
        int cont=0;
        for (int i = 0; i < strlen(num); i++) {
            cont+=num[i]-'0';}
        if(cont%2){strncat(num,&um,1);}
        else{strncat(num,&dois,1);}
        printf("%dº cartão:%s \n",j,num);
    }


    //2
    //Fev 2005/2006->28
    int dia,ano,mes;
    char* meses[13][20]={{"Janeiro",31},{"Fevereiro",28},{"Março",31},{"Abril",30},{"Maio",31},{"Junho",30},{"Julho",31},{"Agosto",31},{"Setembro",30},{"Outubro",31},{"Novembro",30},{"Dezembro",31}};
    printf("Insira o dia e mes no formato dd/mm/aa:");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    for(int i=0;i<12;i++){if((i+1)==mes&&dia==meses[i][1]){mes++;dia=1;if(mes==12){ano++;}}else{dia++;break;}}
    printf("%d de %s de %d",dia,meses[mes-1][0],ano);
}