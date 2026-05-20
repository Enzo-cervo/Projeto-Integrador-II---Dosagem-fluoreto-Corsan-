// Projeto Integrador II - Dosagem de Fluoreto CORSAN
// Código inicial para automação da bomba dosadora com ESP32

#define PINO_SENSOR_VAZAO 34
#define PINO_SAIDA_PWM 25

float vazao = 0.0;
int sinalPWM = 0;

void setup() {
  Serial.begin(115200);

  pinMode(PINO_SENSOR_VAZAO, INPUT);
  pinMode(PINO_SAIDA_PWM, OUTPUT);

  Serial.println("Sistema de automação da bomba dosadora iniciado.");
}

void loop() {
  int leituraSensor = analogRead(PINO_SENSOR_VAZAO);

  vazao = leituraSensor;

  sinalPWM = map(leituraSensor, 0, 4095, 0, 255);

  analogWrite(PINO_SAIDA_PWM, sinalPWM);

  Serial.print("Leitura do sensor: ");
  Serial.print(leituraSensor);
  Serial.print(" | Sinal PWM: ");
  Serial.println(sinalPWM);

  delay(1000);
}
