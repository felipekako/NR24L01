#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9,10); //pinos (CE,CSN)
const byte endereco[6] = "00001"// endereço unico por projeto

int pinoLed = 3;
int estadoBotao = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoLed,OUTPUT);
  digitalWrite(pinoLed,LOW);
  radio.begin();
  radio.openReadingPipe(0,endereco); //define o endereço que vai receber os dados
  radio.setPALevel(RF24_PA_HIGH);//amplificador de sinal
  radio.startListening();// DEFININDO SÓ COMO RECEPTOR DE SINAL
}

void loop() {
  // put your main code here, to run repeatedly:

}
