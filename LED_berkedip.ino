void setup() {
  // Menghidupkan LED bergantian:
pinMode (8, OUTPUT);
pinMode (9, OUTPUT);
pinMode (10, OUTPUT);
pinMode (11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
dua_lampu();
}

void dua_lampu() {
  digitalWrite (8,HIGH);
  digitalWrite (9,HIGH);
  digitalWrite (10,LOW);
  digitalWrite (11,LOW);
  delay(1000);

  digitalWrite (9,HIGH);
  digitalWrite (10,HIGH);
  digitalWrite (8,LOW);
  digitalWrite (11,LOW);
  delay(1000);

  digitalWrite (10,HIGH);
  digitalWrite (11,HIGH);
  digitalWrite (8,LOW);
  digitalWrite (9,LOW);
  delay(1000);

  digitalWrite (8,HIGH);
  digitalWrite (11,HIGH);
  digitalWrite (9,LOW);
  digitalWrite (10,LOW);
  delay(1000);
}
