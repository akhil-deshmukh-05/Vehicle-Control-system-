#include<lpc21xx.h>
#include"header.h"

#define HL ((IOPIN0>>14)&1)
#define LI ((IOPIN0>>15)&1)
#define RI ((IOPIN0>>16)&1)

 CAN2 data;
 int flag_LI,flag_RI,flag_HL,flag;

main()
{
	can2_init();
	uart0_init(9600);
	data.id=0xDF;
	data.rtr=0;
	data.dlc=8;
	data.byteA=0;
	data.byteB=0;
	config_Vic();
	eint_vic();
//	while(1)
//	{
//   if(HL==0)
//   {
//   		while(HL==0);
//   		flag=1;
//		flag_HL=(1^flag_HL);
//		if(flag_HL)
//		{
//			uart0_tx_string("HL_ON--0xAA\r\n");
//			data.id=0x200;
//			data.byteA=0xAA;
//			can2_tx(data);
//		}
//		else
//		{
//			uart0_tx_string("HL_OFF--0xBB\r\n");
//			data.id=0x200;
//			data.byteA=0xBB;
//			can2_tx(data);
//		}
//	}
//	if(LI==0)
//	{
//		while(LI==0);
//		flag=1;
//		if(flag_RI)
//		flag_RI=0;
//		flag_LI=(1^flag_LI);
//		if(flag_LI)
//		{
//			uart0_tx_string("LI_ON--0xCC\r\n");
//			data.id=0x201;
//			data.byteA=0xCC;
//			can2_tx(data);
//		}
//		else
//		{
//			uart0_tx_string("LI_OFF--0xDD\r\n");
//			data.id=0x201;
//			data.byteA=0xDD;
//			can2_tx(data);
//		}
//	}
//	if(RI==0)
//	{
//		while(RI==0);
//		flag=1;
//		if(flag_LI)
//		flag_LI=0;
//		flag_RI=(1^flag_RI);
//		if(flag_RI)
//		{
//			uart0_tx_string("RI_ON--0xEE\r\n");
//			data.id=0x202;
//			data.byteA=0xEE;
//			can2_tx(data);
//		}
//		else
//		{
//			uart0_tx_string("RI_OFF--0xFF\r\n");
//			data.id=0x202;
//			data.byteA=0xFF;
//			can2_tx(data);
//		}
//	}
//	}
}
