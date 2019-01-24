//Blue indicates optional code.
//Red indicates changeable values.

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

//Using Analog Output (AO)

int red = 2;
int yellow = 3;
int green = 4;
int AOpin = A3;
int value;
int average;

void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(AOpin, INPUT);
}

void loop() {
  value = analogRead(AOpin);
  Serial.println(value);  
  if (value >= 800) {
    
    
    //ENTER LED CODE HERE
    
    
  }
  else if (value >= 255 && value <= 600) {
    
    
    //ENTER LED CODE HERE
    
    
  delay(500);
  }
  else {
    
    
    //ENTER LED CODE HERE
    
    
  }
}
