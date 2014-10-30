// from http://www.circuitsathome.com/mcu/reading-rotary-encoder-on-arduino but with fixes
// handles pins other than the first ones on a port, and doesn't double step

#define ENC_A 2
#define ENC_B 3
#define ENC_PORT PIND
#define ENC_SHIFT 2
 
// ENC_A ENC_B ENC_PORT ENC_SHIFT
// 14,15 PINC SHIFT=0
//  8, 9 PINB SHIFT=0
//  0, 1 PIND SHIFT=0
//  2, 3 PIND SHIFT=2

void setup_encoder()
{
  /* Setup encoder pins as inputs */
  pinMode(ENC_A, INPUT);
  digitalWrite(ENC_A, HIGH);
  pinMode(ENC_B, INPUT);
  digitalWrite(ENC_B, HIGH);
}
 
void loop_encoder() {
  counter += read_encoder();
}
 
/* returns change in encoder state (-1,0,1) */
int8_t read_encoder()
{
  static int8_t enc_states[] = {0,-1,1,0,1,0,0,-1,-1,0,0,1,0,1,-1,0};
  static uint8_t previous = 0;
  // shift up previous state; OR in current state
  byte current = ((ENC_PORT >> ENC_SHIFT) & 0x03);
  previous = (previous << 2) | current; 
  // if current state is 0b11 then decode, else just accumulate
  if (current == 0x03) {
    return (enc_states[(previous & 0x0F)]);
  } else {
    return 0;
  }
}
