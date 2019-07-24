#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
 // put your setup code here, to run once:
Serial.begin(9600);


  irrecv.enableIRIn();
}


String str;

void loop() {
  // put your main code here, to run repeatedly:
if (irrecv.decode(&results)) {
     
       str = (String(results.value,HEX));

       if((str=="20df02fd")||(str=="63d1bf9f")){
        Serial.println("upArrow");
         
        }
        if((str=="bd7f17a3")||(str=="20df827d")){
        Serial.println("downArrow"); 
        
        }
        if((str=="20df22dd")||(str=="de8d48a3")){
        Serial.println("leftArrow"); 
        
        }
        if((str=="8b7afb3b")||(str=="20df609f")){
        Serial.println("rightArrow"); 
        
        }
        if(str=="2ade08a3"){
        Serial.println("button1"); 
        }
        if((str=="7f613a3b")||(str=="20dff8d7")){
        Serial.println("button2"); 
        
        }
        if((str=="9f3e1063")||(str=="20df28d7")){
        Serial.println("button4"); 
       
        }
        if(str=="4ceb59ff"){
        Serial.println("button6"); 
        
        }
        if(str=="c984587b"){
        Serial.println("button8"); 
       
        }
        if(str=="2fb2625f"){
        Serial.println("button5"); 
        
        }
        if(str=="9e0a10ff"||str=="20df40bf"){
        Serial.println("volup"); 
        }
        if(str=="8eef4b83"){
        Serial.println("voldown"); 
        }
        if(str=="d617248c"){
        Serial.println("play"); 
        } 
        if(str=="af62f968"){
        Serial.println("seekf"); 
        } 
        if(str=="d3101bda"||str=="20dff10e"){
        Serial.println("seekb"); 
        }
        if((str=="180bd9ff")||(str=="20bf10ef")){
        Serial.println("power"); 
       
        }

        if(str=="3d90959f"){
        Serial.println("exit"); 
        }
        if(str=="6f019a9f"||str=="20dfa25d"){
        Serial.println("qmenu");}
        if(str=="ace7c23f"){
        Serial.println("menu"); 
        } 
        if(str=="86288a23"){
        Serial.println("pUp"); 
        }
        if(str=="169cdc1f"){
        Serial.println("pDown"); 
        }
        if(str=="453cedc3"){
        Serial.println("list"); 
        }
        if(str=="c192b6e3"){
        Serial.println("tv"); 
        }
        if(str=="6121dc9f"){
        Serial.println("input"); 
        }
        if(str=="20df0cf3"||str=="f761a783")
        Serial.println("buttonav");

        if(str=="3ff5d1e3")
        Serial.println("back");
        
        if(str=="ffffffff")
        delay (10);

        
        
        irrecv.resume(); 
       
    }
  }
    


