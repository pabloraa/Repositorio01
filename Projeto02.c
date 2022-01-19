#define TRUE 1
void main(void) {

                TRISB = 0b00000001;
                TRISD = 0b00000000;
                PORTD = 0b00000000;

                        if(RB0 == 1)
                        {
                              PORTD.RD0 = 1;

                        }
                
                
                

}