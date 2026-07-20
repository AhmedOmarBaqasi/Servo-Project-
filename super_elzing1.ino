#include <Servo.h>

// تعريف 4 محركات سيرفو
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// تحديد دبابيس (Pins) التوصيل
const int pin1 = 3;
const int pin2 = 5;
const int pin3 = 6;
const int pin4 = 9;

unsigned long startTime;
bool taskCompleted = false;

int angle = 0;       // الزاوية الحالية للمحركات
int step = 1;        // مقدار الزيادة والنقصان للحركة

void setup() {
  // ربط المحركات بالدبابيس الخاصة بها
  servo1.attach(pin1);
  servo2.attach(pin2);
  servo3.attach(pin3);
  servo4.attach(pin4);

  // تسجيل وقت بداية التشغيل
  startTime = millis();
}

void loop() {
  // حساب الوقت المنقضي منذ تشغيل البرنامج
  unsigned long elapsedTime = millis() - startTime;

  // 1. الحركة الأولى: نمط الـ Sweep لمدة ثانيتين (2000 مللي ثانية)
  if (elapsedTime < 2000) {
    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);

    // تغيير الزاوية لعمل تأثير المسح (Sweep)
    angle += step;
    if (angle >= 180 || angle <= 0) {
      step = -step; // عكس اتجاه الحركة عند الوصول للنهاية
    }
    
    delay(15); // تأخير بسيط لضمان سلاسة حركة المحركات
  } 
  // 2. الحركة الثانية: التوقف والثبات عند زاوية 90 درجة بعد انتهاء الثانيتين
  else if (!taskCompleted) {
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    
    taskCompleted = true; // تثبيت الحالة لتجنب تكرار الأمر
  }
}