# SO.DI-Band
**SO.DI** Band is an ESP8266 based social distancing band which detects the presence of another person near you and alerts you so that even if you are not concious about your proximity to the othre person you are able to maintain safe distance .

# The full project build at 
https://www.hackster.io/amansinghaljpr/so-di-band-social-distancing-band-af8b4b

## Why did i make it (THE PROBLEM) ?? 
So the only feasible precaution for covid-19 is social distancing, but the problem is that while you're working in an office scenario or a place where staff is involved you get so busy in your work that you actually  forget to maintain safe distance.This project actually helps you to maintain safe distance from other people even when you are busy with your wor
Also this project is helpful for the hospitals so that they know they are on a safe distance from the patients. 


## **Solution**

The simple solution was an ESP8266 based SODI band which uses Wi-Fi to actually detect the presence of another band near it and if the band comes way to close it raises an alarm to the user that you are too close to someone .

## **How it works**

In simple terms this band uses the hybrid mode of ESP8266(AT+STA) to detect the presence of another band and using a function called RSSI(Received signal strength intensity)  it detects the sensitivity and hence calculate the distance due to which they get to know that whether the other person is too close or not

## **Future Possibilities**

As it is WiFi capable it can also connect to the wifi router and data to a server where you can check with whom in day you came in contact with or simply put it acts as a CONTACT TRACING DEVICE 
As portable as a watch 
Capable of detecting person from up to 20m (which can be adjusted from 1m to 20m)
Helps you maintain social distance without you taking conscious care about it
Further developments
As we were stuck in a lockdown i tried to make it as feasible as possible. The final version will be like a band with the whole circuit inside it. You can wear it like a watch and instead of an LED and Buzzer there will be HAPTIC feedback like a vibration motor to alert it , an APP to see the data etc 
