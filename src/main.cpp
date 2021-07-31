#include <Keyboard.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard
  Keyboard.begin();

  // Start Payload
  delay(600);

  // Linux run dialog

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();

  delay(200);

  // Mac OS run dialog

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(200);

  // On Windows this changes the input language, so press 3 times

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  // On another OS, this could have typed "   r". Backspace 4 times.

  for(int i = 0; i < 4; i++) {
    typeKey(KEY_DELETE);
  }

  // Type in URL and open page!

  Keyboard.print("http://example.com/");

  typeKey(KEY_RETURN);


  // End Payload

  // Stop Keyboard
  Keyboard.end();
}

// Unused
void loop() {}