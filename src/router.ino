
#define VERSION "1.00a0"
int BUTTON = 2;
void setup() {
 pinMode(BUTTON, INPUT);
 Serial.begin(9600);
}
void loop() {
 //Envia una letra D
  if (digitalRead(BUTTON) == HIGH) {
 Serial.print('D');
 delay(10);
 }
}
