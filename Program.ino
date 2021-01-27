#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define Sensor 8
int red_freq = 0;
int green_freq = 0;
int blue_freq = 0;
void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(Sensor, INPUT);
  
  // Setting frequency-scaling to 20%
  // For frequency scaling we use S0 S1, S0=1 s1=0
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  
  Serial.begin(9600);
}
void loop() {
  // Setting red filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Reading the output frequency
   red_freq = pulseIn(Sensor, LOW);
 
  delay(100);
  // Setting Green filtered photodiodes to be read
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  // Reading the output frequency
  green_freq = pulseIn(Sensor, LOW);
  // Printing the value on the serial monitor
 
  delay(100);
  // Setting Blue filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  // Reading the output frequency
  blue_freq = pulseIn(Sensor, LOW);
  // Printing the value on the serial monitor


 if (red_freq>25 && red_freq< 77) 
  {
  Serial.println("RED COLOUR");
  } 
  else if (blue_freq>25 && blue_freq< 77) 
  {
    Serial.println("BLUE COLOUR");
  } 
  else if (green_freq>25 && green_freq< 77)
 {
  Serial.println("GREEN COLOUR");}

 else
 {
  Serial.println("NO COLOUR DETECTION");
 }
 }
