
#ifndef S7_SEGMENT_COMM_ANODE_S7_SEG_H_
#define S7_SEGMENT_COMM_ANODE_S7_SEG_H_


#define zero  0b11000000
#define one   0b11111001
#define two   0b10100100
#define three 0b10110000
#define four  0b10011001
#define five  0b10010010
#define six   0b10000010
#define seven 0b11111000
#define eight 0b10000000
#define nine  0b10010000
#define dot   0b01111111

void S7SEG_voidInit(u8 PortName);
void S7SEG_voidDisplay(u8 PortName , u8 Numberon7Seg);
void S7SEG_voidClear(u8 PortName );


#endif /* S7_SEGMENT_COMM_ANODE_S7_SEG_H_ */
