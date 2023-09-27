
#include <dht.h>   //biblioteca do sensor de umidade e temperatura
#define    dht_pin    5   //pino de sinal do dht11 ligado no digital 5

dht   my_dht;   //objeto para o sensor
int    temperatura = 0x00,   //armazena a temperatura em inteiro
       umidade     = 0x00;   //armazena a umidade em inteiro

void setup() 
{
   Serial.begin(9600);   //serial em 9600 baud rate
} 

void loop() 
{
   my_dht.read11(dht_pin); //Lendo o pino
   temperatura = my_dht.temperature; //Variavél 
   umidade     = my_dht.humidity; //Variavél 
   
   Serial.print(temperatura);
   Serial.print(" ");
   Serial.println(umidade);
   delay(10);
}
