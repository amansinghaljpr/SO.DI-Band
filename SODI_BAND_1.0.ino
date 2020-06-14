/*This code is developed by Aman Singhal under the project SODI BAND 1.0 
 * as it is an open source project i will try to maintain regular updates on 
 * the github repo at https://github.com/amansinghaljpr/SO.DI-Band do tag 
 * me wherever you use this project . The project is open source because of 
 * the tough times we are going through and i hope people will use this out 
 * of goodwill . Please do no commercialise it without prior permission 
 */

#include <ESP8266WiFi.h>

const char* APssid = "SODI BAND"; //the acess point the device is going to make
const char* APpassword = "1234567890";



const int RSSI_MAX =-31;//  maximum strength of signal in dBm
const int RSSI_MIN =-100;// minimum strength of signal in dBm


void setup() {
  
  WiFi.mode(WIFI_OFF);
  WiFi.disconnect(); 
  delay(100); //this part turns off the wifi and resets it if it was already on
  
  Serial.begin(115200);
  pinMode(14,OUTPUT); //As i was using a generic type board so i used GPIO14 pin as output if you have nodeMCU change this to D5
  Serial.println();
  
  WiFi.mode(WIFI_AP_STA); //configuring the board in hybrid mode 
  Serial.print("Configuring access point...");
  WiFi.softAP(APssid, APpassword);
  

  Serial.println(WiFi.softAPIP());
}

void loop() {
 // this is where magic happens 
  
  Serial.println("Wifi scan started");
  int n = WiFi.scanNetworks();
  Serial.println("Wifi scan ended");
  if (n == 0) {
    Serial.println("no networks found");
  } else {
    Serial.print(n);
    Serial.println(" networks found");
    for (int i = 0; i < n; ++i) {
      // Print SSID and RSSI for each network found
      Serial.print(i + 1);
      Serial.print(") ");
      Serial.print(WiFi.SSID(i));// SSID

                  
      Serial.print(WiFi.RSSI(i));//Signal strength in dBm  
      Serial.print("dBm (");
      
     if(WiFi.SSID(i) == "SODI BAND")
     {

      if(WiFi.RSSI(i) > -37 )
      {
      digitalWrite(14,HIGH);//(Generic esp8255 : (14,HIGH) , NodeMCU : (D5,HIGH) )
      Serial.println("A SODI BAND WAS FOUND");
      break;
      }
     }
      else
      {
        digitalWrite(14,LOW);
        }
     }
      delay(100);
    }
  
  Serial.println("");

  delay(100);
  
  WiFi.scanDelete();  
}
