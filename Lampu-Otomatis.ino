 int hasilSensorLDR; // Variable untuk sensor LDR
  int LED=6; //variabel pin led
  
void setup() {
  Serial.begin(9600); // Serial Monitor
  pinMode(LED,OUTPUT); // Set pin 6 sebagai Output
}

void loop() {
  hasilSensorLDR=analogRead(0); // Hasil LDR = Hasil input pada pin A0
  if (hasilSensorLDR<10) // Jika hasil LDR kurang dari 10 (Kurang Cahaya) (disesuaikan dengan kondisi tempat kalian)
{
    digitalWrite(LED,HIGH); // Aktifkan Relay atau LED
}
  else digitalWrite(LED,LOW); // Jika tidak, Matikan Relay/LED
  Serial.println(hasilSensorLDR); // Print hasil LDR ke Serial Monitor
  delay(500); // Delay setengah detik
}

/* Bahan : (1x Arduino, 1x LDR, 1x Resistor 10k ohm, 1x LED, 1x Breadboard, 5x Kabel jumper)
 *  
 *  
 *  - pin A0 pada Arduino dihubungkan ke salah satu kaki LDR
 * - pin GND pada Arduino dihubungkan ke kaki resistor yang terhubung ke kaki LDR 
 * - Salah satu kaki LDR lainnya dihubungkan ke pin 5v pada Arduino
 * - pin 6 pada Arduino dihubungkan ke Anoda LED
 * - Jumaper pin GND Arduino ke Katoda LED
 */
