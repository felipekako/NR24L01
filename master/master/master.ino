#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9,10);
const byte endereco[6]"55555";


int pinoBotao = 2;
int estadoBotao = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinoBotao,INPUT_PULLUP);
  radio.begin();
  radio.openWritingPipe(endereco);
  radio.setPALevel(RF24_PA_HIGH);
  radio.stopListening();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinoBotao) == HIGH){
  estadoBotao =1;
  radio.write(&estadoBotao,sizeof()estadoBotao
    
  }
}
