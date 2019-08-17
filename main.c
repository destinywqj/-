#include "led.h"
#include "delay.h"
#include "sys.h"
#include "key.h"
#include "time.h"
#include "usart.h"
int main(void)
{
NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	delay_init(); //延时函数初始化
LED_Init(); //LED 端口初始化
uart_init(9600); //串口初始化波特率为 9600

TIM3_Int_Init(19999,7199); //10Khz 的计数频率，计数 2s   Tout=((19999+1)(7199+1))/Tclk
while(1);
}
