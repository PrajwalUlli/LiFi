  const int ldrPin = A0;
const int threshold = 70; //70
const int size = 8;
const int ledDelay = 22;

int bits[size];  // The array to store each bit of the binary representation

void setup() {
  Serial.begin(9600);
}
  
void loop() {
  while (true) {
    int count = 0;
    int readings[size] = {0};
    String code = "";
    bool started = false;
    String c;

    while (count < size) {
      int ldrValue = analogRead(ldrPin);
      if (ldrValue > threshold && !started) {
        started = true;
      }
      if (started) {
        readings[count] = (ldrValue > threshold) ? 1 : 0;
//        Serial.println(ldrValue);
        count++;
        delay(ledDelay); // Delay between taking inputs
      }
    }

    // Debugger

//    Serial.print("Received: ");
//    //here 1st value is ignored as it is just for the ldr to start recording the input
//    for (int i = 1; i < size; i++) {
//      Serial.print(readings[i]);
//    }
//    for (int i = 1; i < size; i++) {
//      code += String(readings[i]);
//    }
//    if (code == "1011100"){
//      Serial.print(" : \\n");
//      Serial.println("");
//    }else{
//      int num = strtol(code.c_str(), NULL, 2);
//      c = String(char(num));
//      Serial.print(" : "+c);
//      Serial.println("");
//    }
//    Serial.println("");


    // Decoder
    for (int i = 1; i < size; i++) {
      code += String(readings[i]);
    }

    if (code == "1011100"){
      Serial.println("");
    }else{
      int num = strtol(code.c_str(), NULL, 2);
      c = String(char(num));
      Serial.print(c); 
    }
  }
}
