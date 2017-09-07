#include "AD_key.h"
/**********************************************************************
**电路介绍：2通道ADC按键，1个ADC通道下面接有8个按键，一共8*2=16个按键
**(ADC1)PB0脚接：----KEY_1----KEY_4----KEY_7----KEY_POINT----KEY_0----KEY_8----KEY_5----KEY_2----
**                  0.302v   0.611v   0.901v     1.19v      1.48V    1.82V    2.09V    2.4V  
**(ADC2)PC5脚接：----KEY_3----KEY_6----KEY_9----KEY_CLR----KEY_OK----KEY_DOWN----KEY_UP----KEY_SET----
**                  0.302v   0.611v   0.901v     1.19v      1.48V    1.82V       2.09V     2.4V
**备注：当没有任何按键按下的时候，ADC引脚为低电平0V
**********************************************************************/


/**********************************************************************
** 函数名称         :KeyConfig
** 创建人           :liupcngcheng
** 创建日期         :2017-9-2
** 最新修改人       :
** 最近修改日期      :
** 功能描述         :初始化按键IO对应的外设的配置
** 入口参数         :none
** 返回参数         :none
** 备注/注意        :初始化/PB0/PC5/口为模拟输入并配置为ADC输入模式
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
** 函数名称         :GetKeyValue 
** 创建人           :liupengcheng
** 创建日期         :2017/9/4 8:46
** 最新修改人       :
** 最近修改日期      :
** 功能描述         :
** 入口参数         :
** 返回参数         :
** 备注/注意        :
** QQ              : 1240612852
***********************************************************************/
KeyEnum GetKeyValue(void)
{
	
}




