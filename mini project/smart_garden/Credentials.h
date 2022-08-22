
#define FIREBASE_HOST "mpmn-5cb9c-default-rtdb.firebaseio.com/" 
#define FIREBASE_AUTH "BhXbFliia5oAci48MZ7NZ64KvqpG9pxlVQ1dfCHH"
#define WIFI_SSID "Durama5G"
#define WIFI_PASSWORD "Gnvr1928*"
#include <Wire.h>
#include "SSD1306.h" 
#include "FirebaseESP32.h"
FirebaseData firebaseData;
SSD1306  display(0x3c, 21, 22);
