#ifndef _PIN_REMAP_H
#define _PIN_REMAP_H

////////*********************************************************/ 
//按键的原理是ADC按键，这里使用了两个ADC引脚做输入，
//每个ADC引脚下面接了8个按键，一共16个按键
//一个是PC5 ,一个是PB0
//作用范围：AD_key.c
#define ADC_KEY_PORT1  GPIOC               
#define ADC_KEY_PORT1_Pin1   GPIO_Pin_5

#define ADC_KEY_PORT2	GPIOB
#define ADC_KEY_PORT2_PIN1    GPIO_Pin_0
/*******************************************************//////////


#endif





