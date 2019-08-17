#include "led.h"
#include "delay.h"
#include "sys.h"
#include "key.h"
#include "time.h"
#include "usart.h"
int main(void)
{
NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	delay_init(); //��ʱ������ʼ��
LED_Init(); //LED �˿ڳ�ʼ��
uart_init(9600); //���ڳ�ʼ��������Ϊ 9600

TIM3_Int_Init(19999,7199); //10Khz �ļ���Ƶ�ʣ����� 2s   Tout=((19999+1)(7199+1))/Tclk
while(1);
}
