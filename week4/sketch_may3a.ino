#define ENA 9
#define IN1 2
#define IN2 3
#define ENB 10
#define IN3 4
#define IN4 5

void setup() {
  // Set pins as outputs
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Move both motors forward
  moveForward();
  delay(2000); // Delay for 2 seconds

  // Stop motors
  stopMotors();
  delay(1000); // Delay for 1 second

  // Move both motors backward
  moveBackward();
  delay(2000); // Delay for 2 seconds

  // Stop motors
  stopMotors();
  delay(1000); // Delay for 1 second
}

// Function to move both motors forward
void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200); // Adjust speed as needed
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 200); // Adjust speed as needed
}

// Function to move both motors backward
void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 200); // Adjust speed as needed
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 200); // Adjust speed as needed
}

// Function to stop both motors
void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}