#define BLYNK_PRINT Serial



/* Fill-in your Template ID (only if using Blynk.Cloud) */

#define BLYNK_TEMPLATE_ID "TMPLyOMB6LDt"
#define BLYNK_DEVICE_NAME "Automatic Pesticide Sprayer"
#define BLYNK_AUTH_TOKEN "6TVouBSCF4-SaGg9bfYq5fRJIVQhoH_W"

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266_SSL.h>



// You should get Auth Token in the Blynk App.

// Go to the Project Settings (nut icon).

char auth[] = "6TVouBSCF4-SaGg9bfYq5fRJIVQhoH_W";



// Your WiFi credentials.

// Set password to "" for open networks.

char ssid[] = "Chetan";

char pass[] = "qqyyqqyy";



int M1PWM = D5; //GPIO14

int M2PWM = D6; //GPIO12

int M1P = D1;  //GPIO5

int M1N = D2;  //GPIO4

int M2P = D3;  //GPIO0

int M2N = D4;  //GPIO2



int pinValue1;

int pinValue2;



BLYNK_WRITE(V1)



{



  int pinValue1 = param.asInt(); // assigning incoming value from pin V1 to a variable



  analogWrite(M1PWM,pinValue1);



  Blynk.virtualWrite(V1, pinValue1);



  Serial.print("V1 Slider value is: ");



  Serial.println(pinValue1);



}
