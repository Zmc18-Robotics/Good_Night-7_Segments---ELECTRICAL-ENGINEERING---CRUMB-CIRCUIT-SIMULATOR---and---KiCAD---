// Program untuk menyalakan 13 lampu secara berurutan
// Arduino Nano
// Semua pin delay 0.5 detik
// Setelah selesai, semua lampu menyala 5 detik, lalu ulang

int lampu[] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 13}; 
int jumlahLampu = 13;
int delayTime = 500;   // 0.5 detik
int delayAkhir = 5000; // 5 detik

void setup() {
  for (int i = 0; i < jumlahLampu; i++) {
    pinMode(lampu[i], OUTPUT);
    digitalWrite(lampu[i], LOW);
  }
}

void loop() {
  // Nyalakan lampu satu per satu
  for (int i = 0; i < jumlahLampu; i++) {
    // Matikan semua dulu
    for (int j = 0; j < jumlahLampu; j++) {
      digitalWrite(lampu[j], LOW);
    }

    // Nyalakan lampu ke-i
    digitalWrite(lampu[i], HIGH);
    delay(delayTime);
  }

  // Setelah semua lampu sudah pernah menyala
  // Nyalakan semua lampu
  for (int i = 0; i < jumlahLampu; i++) {
    digitalWrite(lampu[i], HIGH);
  }

  delay(delayAkhir); // Semua nyala 5 detik

  // Matikan semua lampu sebelum mengulang
  for (int i = 0; i < jumlahLampu; i++) {
    digitalWrite(lampu[i], LOW);
  }

  delay(500); // jeda kecil sebelum loop ulang (opsional)
}
