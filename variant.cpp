#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"

#define CTF1 8
#define CTF2 9
#define CTF3 10

void initVariant()
{
  // Config the LoRa Switch
  pinMode(CTF1, OUTPUT);
  pinMode(CTF2, OUTPUT);
  pinMode(CTF3, OUTPUT);

  digitalWrite(CTF1,  HIGH);
  digitalWrite(CTF2,  LOW);
  digitalWrite(CTF3,  LOW);
}