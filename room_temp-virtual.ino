int val = 0;
float mv =0, cel = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A5,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    val = analogRead(A5);
    Serial.println(val);
    mv = (val/1024.0)*5000;
    cel = mv/10;
    //float farh = (cel*9)/5+32;
    Serial.println(cel);
    delay(1000);
}
