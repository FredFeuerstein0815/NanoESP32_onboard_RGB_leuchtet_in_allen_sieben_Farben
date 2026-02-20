//onboard LED - D13
#define ledBoard 13
//rote LED - D14
#define ledRot 14
//gruene LED - D15
#define ledGruen 15
//blaue LED - D16
#define ledBlau 16

leuchtdauer = 3000;

void setup() {
  Serial.begin(9600);
  pinMode(ledBoard, OUTPUT);
  pinMode(ledRot, OUTPUT);
  pinMode(ledGruen, OUTPUT);
  pinMode(ledBlau, OUTPUT);
}

void alleLEDaus() {
  digitalWrite(ledRot, HIGH);
  digitalWrite(ledGruen, HIGH);
  digitalWrite(ledBlau, HIGH);
}

void loop() {
  delay(1000);
  Serial.println("\ngelbe Board-LED");
  digitalWrite(ledBoard, HIGH);
  delay(leuchtdauer);
  digitalWrite(ledBoard, LOW);

  Serial.println("Rot");
  digitalWrite(ledRot, LOW);
  delay(leuchtdauer);
  digitalWrite(ledRot, HIGH);

  Serial.println("Gruen");
  digitalWrite(ledGruen, LOW);
  delay(leuchtdauer);
  digitalWrite(ledGruen, HIGH);

  Serial.println("Gelb");
  digitalWrite(ledRot, LOW);
  digitalWrite(ledBlau, HIGH);
  digitalWrite(ledGruen, LOW);
  delay(leuchtdauer);
  alleLEDaus();

  Serial.println("Blau");
  digitalWrite(ledBlau, LOW);
  delay(leuchtdauer);
  digitalWrite(ledBlau, HIGH);

  Serial.println("Weiss");
  digitalWrite(ledRot, LOW);
  digitalWrite(ledBlau, LOW);
  digitalWrite(ledGruen, LOW);
  delay(leuchtdauer);

  Serial.println("Lila");
  digitalWrite(ledRot, LOW);
  digitalWrite(ledBlau, LOW);
  digitalWrite(ledGruen, HIGH);
  delay(leuchtdauer);

  Serial.println("Tuerkis\n");
  digitalWrite(ledRot, HIGH);
  digitalWrite(ledBlau, LOW);
  digitalWrite(ledGruen, LOW);
  delay(leuchtdauer);
  alleLEDaus();
}
