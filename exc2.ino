// VOID SETUP = DEFINE AS PORTAS DO ARDUINO

void setup()
{//INICIA
  pinMode(13, OUTPUT); //DEFINE COMO ENTRADA/SAÍDA
  pinMode(5, OUTPUT);
}//FINALIZA

void loop()
{ // INICIA LOOP
  digitalWrite(13, 1); // ligar
  delay(1000); // 1000milisegegundos
  digitalWrite(13, 0); // desligar
  delay(1000);
 
  // LED AMARELO
    digitalWrite(5, 1); // ligar
  delay(1000); // 1000milisegegundos
  digitalWrite(5, 0); // desligar
  delay(1000);
 
 
 
 
}// RETORNA PARA INICIO DO LOOP
