const int Sensor = A0;
const int soilMoistlvlLow = 844;
const int soilMoistlvlHigh = 377;

const int LedHigh = ;
const int LedLow = ;


void setup() {
  serial.begin(115200);
  pinMode(Sensor, INPUT); 

  pinMode(LedHigh, OUTPUT);
  pinMode(LedLow, OUTPUT);
}

void loop() {
  int soilMoist = analogRead(Sensor);
  Serial.print("Analog Value: ");
  Serial.print(soilMoist); 

  int percentSoilMoist = map(soilMoist, soilMoistlvlHigh, soilMoistlvlLow, 100, 0);
  Serial.print("\t");
  Serial.print(percentSoilMoist);
  Serial.println(" %");

  if (percentSoilMoist < 30) {
    digitalWrite(LedLow, HIGH);
    digitalWrite(LedHigh, LOW);
  } else {
    digitalWrite(LedLow, LOW)
    digitalWrite(LedHigh, HIGH)
  }

  delay(2000);
}
