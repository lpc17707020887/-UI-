#include "AD_key.h"
/**********************************************************************
**��·���ܣ�2ͨ��ADC������1��ADCͨ���������8��������һ��8*2=16������
**(ADC1)PB0�Žӣ�----KEY_1----KEY_4----KEY_7----KEY_POINT----KEY_0----KEY_8----KEY_5----KEY_2----
**                  0.302v   0.611v   0.901v     1.19v      1.48V    1.82V    2.09V    2.4V  
**(ADC2)PC5�Žӣ�----KEY_3----KEY_6----KEY_9----KEY_CLR----KEY_OK----KEY_DOWN----KEY_UP----KEY_SET----
**                  0.302v   0.611v   0.901v     1.19v      1.48V    1.82V       2.09V     2.4V
**��ע����û���κΰ������µ�ʱ��ADC����Ϊ�͵�ƽ0V
**********************************************************************/


/**********************************************************************
** ��������         :KeyConfig
** ������           :liupcngcheng
** ��������         :2017-9-2
** �����޸���       :
** ����޸�����      :
** ��������         :��ʼ������IO��Ӧ�����������
** ��ڲ���         :none
** ���ز���         :none
** ��ע/ע��        :��ʼ��/PB0/PC5/��Ϊģ�����벢����ΪADC����ģʽ
** QQ              : 1240612852
***********************************************************************/
void KeyConfig()
{
	ADC_InitTypeDef ADC_InitStruct;
	GPIO_InitTypeDef GPIO_InitStruct;

	//RCC Config
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1 | RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC, ENABLE);

	//GPIO Config
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AIN;
	GPIO_InitStruct.GPIO_Pin = ADC_KEY_PORT1_Pin1;

	GPIO_Init(ADC_KEY_PORT1, &GPIO_InitStruct);

	GPIO_InitStruct.GPIO_Pin = ADC_KEY_PORT2_PIN1;
	GPIO_Init(ADC_KEY_PORT2,&GPIO_InitStruct);


	//ADC Config
	ADC_InitStruct.ADC_Mode = ADC_Mode_Independent;
	ADC_InitStruct.ADC_ExternalTrigConv = ADC_ExternalTrigConv_None;
	ADC_InitStruct.ADC_DataAlign = ADC_DataAlign_Right;
	ADC_InitStruct.ADC_ScanConvMode = DISABLE;
	ADC_InitStruct.ADC_NbrOfChannel = 1;

	ADC_Init(ADC1, &ADC_InitStruct);
}

/**********************************************************************
** ��������         :GetKeyValue 
** ������           :liupengcheng
** ��������         :2017/9/4 8:46
** �����޸���       :
** ����޸�����      :
** ��������         :
** ��ڲ���         :
** ���ز���         :
** ��ע/ע��        :
** QQ              : 1240612852
***********************************************************************/
KeyEnum GetKeyValue(void)
{
	
}




