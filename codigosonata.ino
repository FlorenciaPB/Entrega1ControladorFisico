const int faderPin = A0;  // Pin donde está conectado tu slider
const int buttonPin = 2;  // Pin donde está el botón

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP); // Usar resistencia pull-up interna
}

void loop() {
  int faderValue = analogRead(faderPin);
  int buttonState = digitalRead(buttonPin);

  // Formato estricto que lee el código web: P:[valor],B:[valor]
  Serial.print("P:");
  Serial.print(faderValue);
  Serial.print(",B:");
  Serial.println(buttonState);
  
  delay(20); // Pequeña pausa estable para evitar saturar el puerto serie
}