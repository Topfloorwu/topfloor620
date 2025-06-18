#define RED_LED 8
#define YELLOW_LED1 9
#define YELLOW_LED2 10
#define TOUCH_PIN A0

int touchThreshold = 1; // 依實驗調整
bool killed = false; // 新增flag

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED1, OUTPUT);
  pinMode(YELLOW_LED2, OUTPUT);
  Serial.begin(9600);

  digitalWrite(RED_LED, HIGH);
  digitalWrite(YELLOW_LED1, LOW);
  digitalWrite(YELLOW_LED2, LOW);
}

void loop() {
  int touchValue = analogRead(TOUCH_PIN);

  if (touchValue > touchThreshold) {
    digitalWrite(RED_LED, LOW);
    digitalWrite(YELLOW_LED1, HIGH);
    digitalWrite(YELLOW_LED2, HIGH);
    if (!killed) {
      Serial.println(9999); // 只傳一次擊落訊號
      killed = true;
    }
  } else {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(YELLOW_LED1, LOW);
    digitalWrite(YELLOW_LED2, LOW);
    killed = false; // 只要回到低於門檻就可再次觸發
    Serial.println(touchValue); // 傳送正常數值
  }
  delay(50);
}
