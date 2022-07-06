#include <iostream>

using namespace std;

int main()
{
    long long int num;
    int soma, somadiv10, soma1, m10, dv, d0, d1, d2 ,d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    cout<<"digite um valor inteiro de treze digitos"<<endl;
    cin>>num;
    ///Para descobrir cada valor de cada posicao no numero inteiro
    d0=num/1%10;
    d1=num/10%10;
    d2=num/100%10;
    d3=num/1000%10;
    d4=num/10000%10;
    d5=num/100000%10;
    d6=num/1000000%10;
    d7=num/10000000%10;
    d8=num/100000000%10;
    d9=num/1000000000%10;
    d10=num/10000000000%10;
    d11=num/100000000000%10;
    d12=num/1000000000000%10;
    ///multiplicando os dígitos ímpares por 3, e os pares por 1, passo 2
    d0=d0*1;
    d1=d1*3;
    d2=d2*1;
    d3=d3*3;
    d4=d4*1;
    d5=d5*3;
    d6=d6*1;
    d7=d7*3;
    d8=d8*1;
    d9=d9*3;
    d10=d10*1;
    d11=d11*3;
    d12=d12*1;

    ///soma de d12 a d1, passo 3
    soma=d12+d11+d10+d9+d8+d7+d6+d5+d4+d3+d2+d1;

    ///soma vai ser dividida por 10, passo 4
    somadiv10=soma/10;

    ///Soma-se 1 ao resultado obtido, passo 5
    soma1=somadiv10+1;

    ///Multiplica-se o resultado obtido por 10, passo 6
    m10=soma1*10;

    ///Para obter o dígito verificador, subtraia o resultado do passo 6 do resultado do passo 3, passo 7
    dv=m10-soma;

    ///caso o resultado do digita verificador tenha dado um resultado que for multiplo de 10 basta subistituir por zero passo 8
    if (dv % 10==0 ){
     dv=0;

    }

    ///informar se o codigo esta valido ou invalido ,passo 9
    if (dv==d0){
        cout<<"Digito verificador valido";
        dv=d0;

        cout<<"\ndv:"<<dv<<endl;
    }
    else{
        cout<<"Digito verificador invalido"<<endl;
    }


    return 0;
}
///Larissa de Sousa Gouvea, Mateus Luan Reginato Fuchter, Nelson Alves Dias Filho, Vitor Cordeiro.
