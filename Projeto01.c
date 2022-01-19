#define TRUE 1
void main() {
     TRISD = 0;
     PORTD = 0;
     while(TRUE){
                 PORTD = 0;
                 Delay_ms(10);
                 PORTD = 255;
                 Delay_ms(10);
     }
}