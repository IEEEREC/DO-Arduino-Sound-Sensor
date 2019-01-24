//Using Digital Output (DO)

int red = 2;
int green = 3;
int DOpin = 4;
int value;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(DOpin, INPUT);
}

void loop() {
  value = digitalRead(DOpin);
  Serial.println(value);
  if (value == 1) {
    
    
    //ENTER LED CODE HERE
    
    
  }
  else {
    
    
    //ENTER LED CODE HERE
    
    
  }
}
