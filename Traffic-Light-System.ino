void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);  // Merah menyala
  delay(5000);            // Tahan selama 5 detik
  digitalWrite(9, LOW);   // Merah mati
  digitalWrite(10, HIGH); // Kuning menyala
  delay(2000);            // Tahan selama 2 detik
  digitalWrite(10, LOW);  // Kuning mati
  digitalWrite(11, HIGH); // Hijau menyala
  delay(5000);            // Tahan selama 5 detik
  digitalWrite(11, LOW);  // Hijau mati
}
