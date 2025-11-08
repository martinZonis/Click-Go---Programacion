#include <Keyboard.h>

//┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
//
//  ==== DECLARACIÓN DE MACROS ====
//
//┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

#define BOTON1 2
#define BOTON1 2
#define BOTON1 2
#define BOTON1 2
#define BOTON1 2
#define BOTON1 2
#define BOTON1 2
#define BOTON1 2
#define BOTON1 2
#define BOTON1 2
#define BOTON1 2
#define BOTON1 2



//┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
//
//         ==== SETUP ====
//
//┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

void setup() {
  pinMode(BOTON1, INPUT_PULLUP);
  pinMode(BOTON2, INPUT_PULLUP);
  pinMode(BOTON3, INPUT_PULLUP);
  pinMode(BOTON4, INPUT_PULLUP);
  pinMode(BOTON5, INPUT_PULLUP);
  pinMode(BOTON6, INPUT_PULLUP);
  pinMode(BOTON7, INPUT_PULLUP);
  pinMode(BOTON8, INPUT_PULLUP);
  pinMode(BOTON9, INPUT_PULLUP);
  pinMode(BOTON10, INPUT_PULLUP);
  pinMode(BOTON11, INPUT_PULLUP);
  pinMode(BOTON12, INPUT_PULLUP);
  Keyboard.begin();
  Serial.begin(9600);
}

//┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
//
//          ==== LOOP ====
//
//┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛


void loop() {
  if (digitalRead(BOTON1) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('1');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON1 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON2) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('2');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON2 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON3) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('3');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON3 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON4) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('4');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON4 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON5) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('5');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON5 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON6) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('6');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON6 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON7) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('7');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON7 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON8) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('8');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON8 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON9) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('9');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON9 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON10) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('1');
    Keyboard.press('0');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON10 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON11) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('1');
    Keyboard.press('1');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON11 presionado ");
    delay(500);
  }
  else if (digitalRead(BOTON12) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('1');
    Keyboard.press('2');
    delay(100);
    Keyboard.releaseAll();
    Serial.println("BOTON12 presionado ");
    delay(500);
  }
}
