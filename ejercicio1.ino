const int ledPin = 4;  // Pin donde está conectado el LED
int delayValue = 1000;   // Tiempo de retardo inicial (1 segundo en milisegundos)
int i = 1;
void setup() {
  pinMode(ledPin, OUTPUT);  // Configura el pin del LED como salida
  
}

void loop() {
    if(i == 10){
      i = 0;
    }
    digitalWrite(ledPin, HIGH);    // Enciende el LED
    delay(i * delayValue);               // Espera por i segundos
    digitalWrite(ledPin, LOW);     // Apaga el LED
    delay(delayValue);               // Espera por i segundos antes de la siguiente iteración
    i+=1;
}