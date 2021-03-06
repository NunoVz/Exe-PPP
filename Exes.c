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
    char mes[13][12]={"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    if(num>=13||num<=0){printf("O numero que introduziu não corresponde a nenhum mês");}
    else{for(int i=1;i<13;i++){if((i)==num){printf("%s",mes[i]);}}}



    //7
    int lados;
    printf("Insira o numero de lados(max=20): ");
    scanf("%d",& lados);
    char item[20][20]={"Não Existe","Não Existe","Triângulo","Quadrilátero","Pentágono","Hexágono","Octógono","Eneágono","Undecágono","dodecágono","tridecágono","tetradecágono","pentadecágono","hexadecágono","heptadecágono","octodecágono","eneadecágono","icoságono"};
    for(int i=1;i<21;i++){if((i)==lados){printf("O poligono é um %s",item[i]);}}
}*/


//Ex2.3
/*int main() {
    //1
#include <string.h>
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
    int num,x,menor;
    printf("Quantos elementos quer adcionar:");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("Número:");
        scanf("%d",&num);
        if (i==0){menor=num;}
        else if(num<menor){menor=num;}}
    printf("%d",menor);


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


    //5 versão alternatica proposta na aula
    int linhas, i, j,espaçamento;
    printf("Introduza o numero de linhas: ");
    scanf("%d", &linhas);
    for (i = 1; i <= linhas; i++) {
        for(espaçamento=1;espaçamento<=linhas-i;espaçamento++){printf(" ");}
        for (j = 1; j <= i; ++j) {printf("* ");}
        printf("\n");}
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
    for (int i = 1; i <= (x*y); ++i) {
        mult=x*i;
        for (int j = 1; j <=(x*y) ; ++j) { mult1=y*j;if(mult==mult1){break;}}
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
#include <string.h>
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



    //10
#include <string.h>
#include <math.h>
    char num[50];
    while(strcmp(num, "quit")!=0) {
        int baseintr,baseconv,numint,potencia,resultado = 0, base = 1, resto,a[50],k;
        printf("Introduza um numero (quit para sair): ");
        scanf("%s", num);
        printf("Qual a base do número introduzido (0 -Decimal; 1 -Octal; 2 -Binária): ");
        scanf("%d",&baseintr);
        printf("Qual a base para a conversão (0 -Decimal; 1 -Octal; 2 -Binária): ");
        scanf("%d",&baseconv);
        potencia=1;
        //Estes Fors transformam a string numa variavel int
        for (int i =(strlen(num)-1); i >= 0; --i) {for (int j = 1; j <= strlen(num)-i-j; ++j) {potencia*=10;} numint+=(num[i]-48)*potencia;}
        switch(baseintr){
            resultado=0;
            case(0):
                switch(baseconv){
                    case(0):
                        printf("%s",num);
                        break;
                    case(1):
                        //Dec->Octal
                        printf("%s = %o\n",num,numint);
                        break;
                    case(2):
                        //Dec->Bin
                        for( k=0;numint>0;k++) {
                            a[k]=numint%2;
                            numint=numint/2;
                        }
                        printf("%s  = ",num);
                        for(k=k-1;k>=0;k--){
                            printf("%d",a[k]);
                        }
                        printf("\n");
                        break;
                }
                break;
            case(1):
                switch(baseconv){
                    case(0):
                        //Octal->Dec
                        k = 0;

                        while(numint != 0)
                        {
                            resultado += (numint%10) * pow(8,k);
                            ++k;
                            numint/=10;
                        }

                        k = 1;
                        printf("%s = %d",num,resultado);
                        break;
                    case(1):
                        printf("%s\n",num);
                        break;
                    case(2):
                        //Octal->Bin

                        //Octal->Dec
                        k = 0;

                        while(numint != 0)
                        {
                            resultado += (numint%10) * pow(8,k);
                            ++k;
                            numint/=10;
                        }

                        k = 1;
                        //Dec->Bin
                        for( k=0;numint>0;k++) {
                            a[k]=numint%2;
                            numint=numint/2;
                        }
                        printf("%s  = ",num);
                        for(k=k-1;k>=0;k--){
                            printf("%d",a[k]);
                        }
                        printf("\n");
                        break;
                }
                break;
            case(2):
                switch(baseconv){
                    case(0):
                        //Bin->Dec
                        while (numint > 0)
                        {
                            resto = numint % 10;
                            resultado = resultado + resto * base;
                            numint = numint / 10 ;
                            base = base * 2;
                        }
                        printf("%s = %d\n",num,resultado);
                        break;
                    case(1):
                        //Bin->Octal
                        resultado = 0,k = 0;
                        int dec = 0;
                        // Bin->Dec
                        while (numint != 0) {
                            dec += (numint % 10) * pow(2, k);
                            ++k;
                            numint /= 10;
                        }
                        k = 1;
                        // Dec->Octal
                        while (dec != 0) {
                            resultado += (dec % 8) * k;
                            dec /= 8;
                            k *= 10;
                        }
                        printf("%s = %d",num,resultado);
                        break;
                    case(2):
                        printf("%s\n",num);
                        break;
                }
                break;
        }
    }


    //11
    int cont,valor;
    float mediaari;double mediahar;
    while(valor!=999) {
    int cont;double valor=0L;
    double mediaari;double mediahar;
    while(valor!=999) {
        printf("Introduza um valor:");
        scanf("%lf",&valor);
        if(valor!=999){
            cont++;
            mediaari+=valor;
            mediahar+=1/valor;
        }
        else{
            mediaari=mediaari/cont;
            mediahar=cont/mediahar;
            printf("A média aritmética: %.3f\nA média harmónica: %.3f",mediaari,mediahar);
        }
    }

}*/

//Ex 3.3
/*
// 1
int main() {
    //1
    int c=-5,f;
    printf("C ");
    while(c!=200){printf("%3d ",c );c+=5;}
    printf("\nF ");
    c=-5;
    while(c!=200){f=c*(9/5)+32;printf("%3d ",f);c+=5;}


    //2
        int primeiro,segundo,soma1,soma2;
    printf("Introduza o primeiro numero:");
    scanf("%d",&primeiro);
    printf("Introduza o segundo numero:");
    scanf("%d",&segundo);
    for (int a = 1;a<primeiro;a++){
        if (primeiro%a == 0){
            soma1+=a;
        }
    }
    for (int a = 1;a<segundo;a++) {
        if (segundo%a == 0) {
            soma2 += a;
        }
    }
    if (soma2 == primeiro && soma1 == segundo){
        printf("%d e %d sao numeros amigos!",primeiro,segundo);
    }
    else {
        printf("%d e %d nao sao numeros amigos :(",primeiro,segundo);
    }

    //3
        int x,soma=0;
    printf("Introduza um numero: ");
    scanf("%d",&x);
    for (int i = 1; i < x; ++i) {
        if(!(x%i)){ soma+=i;}}
    if(soma==x){
        printf("Numero perfeito : %d\n",x);
        printf("Fatores: ");
        for (int i = 1; i < x; ++i) {
            if(!(x%i)){ printf("%d ",i);}}
    }
    else{printf("Não é um numero perfeito");}

    //4
    #include <math.h>
    int num,cont,primeiro,segundo,terceiro;
    num=100;
    while(cont!=4){
        primeiro=(num/1)%10;
        segundo=(num/10)%10;
        terceiro=(num/100)%10;
        if(num==(pow(primeiro,3)+pow(segundo,3)+pow(terceiro,3))){
            printf("%d=%d^3+%d^3+%d^3\n",num,primeiro,segundo,terceiro);
            cont++;
        }num++;
    }

    //5
    int x;
    printf("Introduza um limite maximo: ");
    scanf("%d",&x);
    printf("Numeros primos: ");
    for (int j = 1; j < x; ++j) {
        int primo=1;
        for (int k = 2; k <j;++k) {
            if(!(j%k)){primo=0;}
        }
        if(primo){printf("%d ",j);}
    }

    //6
    int fib,fib1,fib2=1,i;
    while(fib2<=100){
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
        if(fib<=100){
        printf("F%d: %d\n",i,fib);}
        i++;
    }

    //7
    #include <math.h>
    int x,elevado,menossign;
    printf("Insira um limite maximo:");
    scanf("%d", &x);
    for (int i = 0; i < pow(10,x)-1;++i) {
        elevado=pow(i,2);
        menossign=elevado%(int)pow(10,x);
        if(menossign==i){printf("Possui:%d(%d*%d=%d)\n",i,i,i,elevado);}
    }

    //8
    int n, numcontrario = 0, resto, num;
    printf("Enter an integer: ");
    scanf("%d", &n);
    num = n;
    while( n!=0 ){
        resto = n%10;
        numcontrario = numcontrario*10 + resto;
        n /= 10;
    }
    if (num == numcontrario){printf("%d é capicua", num);}
    else{printf("%d não é capicua", num);}

    //9
    for (int i = 100; i <= 1000; i+=100) {
        int cont=0;
        float num=i;
        while (num>=2) {
            num = num / 2;
            cont++;
        }
    printf("log(%d)=%d \n",i,cont);
    }
}
}*/


//Ex 4.1
/*
int validate(int n);
int fatorial(int n);
int main(){
    int num;
    printf("Insira um numero: ");
    scanf("%d",&num);
    if(validate(num)){
        printf("%d",fatorial(num));
    }

}
int fatorial(int n){
    int fat=1;
    for (int i = 1; i <= n; ++i) {
        fat*=i;
    }
    return fat;
}

int validate(int n){
    return (n>0);
}*/



//Ex 4.2
/*
 //1
void formula(int n);

int main(){
    int x;
    printf("Insira o valor de n\nn = ");
    scanf("%d",&x);
    formula(x);
}
void formula(int n){
    int result=1;
    for (int i = n-1; i > 1; --i) {
        result= result*i;
        printf("p(%d/%d)=%d\n", n,((n+1)-i),result);
    }
}
 //3

 //6
int capicua(int n);
void compara(int num,int numcontrario);
 int main() {
    //declaro 4 variaveis
    int n;
    printf("Introduz um numero: ");
    scanf("%d", &n);
    compara(n,capicua(n));
}

int capicua(int n ){
    int resto,numcontrario=0;
    while( n!=0 ){
        resto = n%10;
        numcontrario = numcontrario*10 + resto;
        n /= 10;
    }
    return numcontrario;
}
void compara(int x,int y){
    if (x == y){printf("%d é capicua", x);}
    else{printf("%d não é capicua", x);}
}




//8
 int formula(int CI,int CII){
    int resultado;
    resultado=(int)pow(CI,2)+(int)pow(CII,2);
    return resultado;
}
int verificacao(int x,int y,int z){
    if (x>y && x>z){
        if(pow(x,2)==formula(y,z)){
            return 1;
        }
        return 0;
    }
    if (y>z && y>x){
        if(pow(y,2)==formula(x,z)){
            return 1;
        }
        return 0;

    }
    if (z>x && z>y){
        if(pow(z,2)==formula(y,x)){
            return 1;
        }
        return 0;
    }
}

int main() {
    //h2=c2+c2
    //pow()->Math.h
    //py(3**2==9), C(pow(5,2)=25)
    int x,y,z;
    printf("Introduza os numeros no formato(x/y/z):");
    scanf("%d/%d/%d",&x,&y,&z);
    if(verificacao(x,y,z))
        printf("É possivel");
    else
        printf("Não é possivel");
}




 */


//Ex 4.2.3

//1
/*
int contador_dig(int y){
    int num=y,cont=0;
    while(num!=0){
        cont++;
        num/=10;
    }
    return cont;}


int verificar(int x,int y,int dig){
    int n;
    while(x!=0){
        n=x%(int)pow(10,dig);
        if(n==y){return 1;}
        x/=10;
    }
    return 0;
}
int main() {
    int x,y;
    printf("Insira os dois numeros no formato(x/y):");
    scanf("%d/%d",&x,&y);
    if(verificar(x,y,contador_dig(y)))
        printf("O numero esta contido!\n");
    else
        printf("O numero não esta contido!\n");
}*/





//2
/*
float numgen(){
    float x;
    x=((float)rand()/(float)(RAND_MAX));
    return x;
}
int verificação(float x,float y){
    float conta=pow(x,2)+pow(y,2);
    if (conta>=1){return 0;}//Fora
    else return 1;//dentro
}
int main (){
#include<time.h>
#include <stdlib.h>
    srand(time(0));
    int dentro,fora=0,x;
    float quociente;
    printf("Introduza um numero, quanto maior mais perto estara de ~=0.7853:");
    scanf("%d",&x);
    for (int i = 0; i < x; ++i) {
        if (verificação(numgen(), numgen()))
            dentro++;
        else
            fora++;
    }
    quociente=(float)dentro/fora;
    printf("%f\n",quociente);
}
*/




//3
/*double mySqrt(int n, int numCasasDecimais){
    float anteriorsqrt=0,sqrt;
    sqrt=n/2;
    while(sqrt!=anteriorsqrt){
        anteriorsqrt=sqrt;
        sqrt=(n/anteriorsqrt+anteriorsqrt)/2;
    }
    return (double)round(sqrt*pow(10,numCasasDecimais))/pow(10,numCasasDecimais);
}
int main (){
    int n,numCasasDecimais;
    printf("Insira o numero:");
    scanf("%d",&n);
    printf("Insira o numero de casas decimais:");
    scanf("%d",&numCasasDecimais);
    printf("%lf",mySqrt(n,numCasasDecimais));
}*/

//4

/*int inverte(int n) {
    int resto, numcontrario = 0;
    while (n != 0) {
        resto = n % 10;
        numcontrario = numcontrario * 10 + resto;
        n /= 10;
    }
    return numcontrario;
}
void espera(){
    Sleep(50);
}
int main() {
    int x,algarismo,num;
    while(1) {
        printf("Insira um numero:");
        scanf("%d", &x);
        x = inverte(x);
        for (int i = 9; i > 0; --i) {
            num = x;
            while (num != 0) {
                algarismo = num % 10;
                if (algarismo >= i)
                    printf("*");
                else
                    printf(" ");
                num /= 10;
            }
            printf("\n");
        }
        espera();
    }
}*/





//5
/*
double formulamedia(char esta[5]){
    double media=0;
    for (int i = 0; i < 5; ++i) {
        media+=esta[i];
    }
    media/=5;
    return media;
}
double formulaequilibrio(char esta[5],double media){
    double equilibrio=0;
    for (int i = 0; i < 5; ++i) {
        equilibrio+=pow((esta[i]-media),2);
    }
    equilibrio*=(double)1/(5-1);
    return equilibrio;
}
double formulaclassificacao(double media,double equilibrio){
    double classificao;
    if(equilibrio<=media)
        classificao=media;
    else
        classificao=media/2;
    return classificao;
}
int main() {
    int numero=0, x, y, z, k, l;
    while (numero!=-1) {
        scanf("%d",&numero);
        if(numero==-1){printf("O programa vai encerrar");break;}
        scanf("%d %d %d %d %d", &x, &y, &z, &k, &l);
        char esta[5] = {x, y, z, k, l};
        printf("%d\nMedia=%lf\nEquilibrio=%lf\n", numero, formulamedia(esta),
               formulaequilibrio(esta, formulamedia(esta)));
        printf("Classifição=%lf\n",
               formulaclassificacao(formulamedia(esta), formulaequilibrio(esta, formulamedia(esta))));
    }
}
*/
