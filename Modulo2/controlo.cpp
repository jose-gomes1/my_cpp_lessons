#include <iostream>
using namespace std;


/**
 * @brief Função para calcular a soma dos números a até um limite
 * @param limite - Limite para a soma
 * @return Soma dos números até ao limite
*/
int somaNumero(int limite){
    int soma=0;
    for(int x=1; x<=limite; x++){
        soma += x;
    }
    return soma;
}

int getLimite(){

    int limite;
    cout << "Qual é o limite? ";
    cin >> limite;
    return limite;
}

struct pessoa
{
    int idade;
    string nome;
    string sobrenome;
    long cc;
};

pessoa funcao(pessoa xpto){
    cout << xpto.nome << endl;
    xpto.nome = "Zé\n";
    return xpto;
};

int main(){
    // system("cls||clear");

    pessoa paulo;
    paulo = funcao(paulo);
    cout << paulo.nome;

    // int limite;
    // limite = getLimite();
    // cout << "Total: " << somaNumero(limite) << endl;
    return 0;
    }

    // int num, sum=0;

    // for(num=1; num<=100; num++){
    //     if(num%4==0){
    //         //break;
    //         continue;
    //     }
    //         sum += num;
    //     }

    // cout << "Total: " << sum << endl;
    // cout << "Número: " << num << endl;

    /**
     * o que nós queremos fazer é um sistema de controlo de regra, eu tenho o solo e vou ter o sensor de humidade e um sistema de regra
     * ora muito bem
     * e depois tem aqui o meu nivel 1 2 3 4 5 6
     * há aqui vários fatores
     * para já, o programa vai inicializar o setup, os pinos dos servidores do arduino, os pinos, input, output, o objeto da strip de cores
     * e depois o programa isso divide-se aqui em vários problemas e nós temos de olhar para isto como um problema
     * qual é o objetivo primário deste projeto? deste sistema? o objetivo deste sistema é manter o meu solo num determinado lvl de humidade
     * neste caso, é tudo a mesma planta
     * ora então qual é a principal leitura que temos de tomar? o que é que eu tenho de estar a monitorizar? o solo
     * a melhor forma que temos de fazer isto é a variável global
     * muito bem
     * então uma das soluções é uma varioável global para ler os sensores
     * é global, global, global
     * eu tenho aqui o meu código loop
     * se o meu principal objetivo é manter a monitorização ativa
     * no loop vou chamar uma função que eu vou intitular de getSensorReading
     * e esta função vai buscar a leitura do sensor e guardar na variável global
     * eu tenho um problema aqui
     * o meu solo pode variar
     * a dureza do solo vai definir o tempo que a água vai levar a penetrar
     * eu não posso desligar a rega imediatamente após ler o sensor
     * nada melhor do quer no fim do loop colocar um delay
     * ele pega a água e aciona por um determinado tempo
     * eu preciso da constante do tempo de pausa e do tempo de rega 
     * tens de entender como funciona o pixel led
     * quando eu tiver num determinado valor, por exemplo a metade, da metade pra baixo ele ativa a rega num determinado tempo
     * qual é a 3a parte desse projeto?
     * começar a fazer os sensores, os valores que eu vou ter aqui vão acionar a rega
     * o que é que é mais chato aqui?
     * todo o trabalho tem vários níveis, que são toda a gente tem de fazer, um que é suposto todos saberem e um que só alguns vão saber
     * pegar numa tira de 0 a 17 leds e permitir que cada uma dessas coisas faça uma escala que acompanhe o lvl de humidade
     * a partir do valor dado pelo sensorReading é que vou brincar com a escala
     * se a primeira escala é de 0 a 5, quando eu vario o sensor de humidade vou ter a humidade do solo, com o minimo 0
     * e o máximo ~700
     * o ser humano não tem capacidade pra decorar isso tudo e o cerebro tem um mecanismo automático que filtra, exceto as mulheres
     * as mulheres não se esquecem de nada
     * lembram-se do dia, há 4 anos atrás, no café às 2 e 25 da tarde, quando pediste um café e dois amigos apareceram
     * ok, vamos agora supor que a variação da escala é de 0 a 700
     * e os ids são de 0 a 5
     * eu pego a regra de 3 simples, map, que tem o sensorReading, os valores possiveis (0-700) e os valores que vai ser transformado (0-5)
     * map(sensorReadin; 0, 700; 0, 5)
     * como os leds estão divididos de forma sequencial e repetitiva, só com isso dá pra buscar os endereços das outras escalas
     * 
     * uint32_t red = pixels.Color(255,0,0);
     * uint32_t yellow = pixels.Color(255,255,0);
     * uint32_t green = pixels.Color(0,255,0);
     * uint32_t off = pixels.Color(0,0,0);
     * 
     * scale1=mapping
     * scale2=mapping+6
     * scale3=mapping+12
     * 
     * void setScale(){
     * for(int n=0); n<LED_COUNT>; n+=6) strip.setPixelColor(n, red);
     * for(int n=1); n<LED_COUNT>; n+=6) strip.setPixelColor(n, red);
     * for(int n=2); n<LED_COUNT>; n+=6) strip.setPixelColor(n, yellow);
     * for(int n=3); n<LED_COUNT>; n+=6) strip.setPixelColor(n, green);
     * for(int n=4); n<LED_COUNT>; n+=6) strip.setPixelColor(n, green);
     * for(int n=5); n<LED_COUNT>; n+=6) strip.setPixelColor(n, green);
     * ledScale1= map(HUM_SENS_1_READINGS, LOWER_HUM_VAL, HIGHER_LUM_VAL, SCALE1_FIRST_ID, SCALE1_LAST_ID);
     * ledScale2= map(HUM_SENS_2_READINGS, LOWER_HUM_VAL, HIGHER_LUM_VAL, SCALE2_FIRST_ID, SCALE2_LAST_ID);
     * ledScale3= map(HUM_SENS_3_READINGS, LOWER_HUM_VAL, HIGHER_LUM_VAL, SCALE3_FIRST_ID, SCALE3_LAST_ID);
     * }
    **/