/*
 * ACENDER LED COM FOTORESISTOR (LDR)
 * @author: Milênio Rocha
 * mileniorocha.com.br
 * 
 */
// --- DEFINIR PINOS E VARIÁVEIS ---

// PINO ANALOGICO
#define pinoSensor A0

// PINO DIGITAL
#define pinoLed 2

// VARIÁVEL DO SENSOR
int leituraSensor = 0;

//  VARIAVEL DE INTENSIDADE DO SENSOR 
int intensidadeSensor = 50;                                


// FUNÇÃO DE CONFIGURAÇÃO INICIAL
void setup() {
// DECLARA PINO DO LED COMO SAIDA
  pinMode(pinoLed, OUTPUT);
}

// FUNÇÃO DE EXECUÇÃO DO PROGRAMA
void loop() {
  // LÊ O PINO ANALOGICO (SENSOR LDR)
  leituraSensor = analogRead(pinoSensor);
  
// SE A LEITURA DO SENSOR FOR MENOR QUE A VARIAVEL DE INTENSIDADE DO SENSOR
  if(leituraSensor > intensidadeSensor){
  // LIGA O LED
     digitalWrite( pinoLed, HIGH);
  } else { // SENÃO
   // DESLIGA O LED
   digitalWrite( pinoLed, LOW);
  }
// TEMPO DE ESTABILIZADO PARA RETORNAR LAÇO DE REPETIÇÃO
  delay(2);
}