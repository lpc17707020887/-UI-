#ifndef _UI_H
#define _UI_H
/****************************1、头文件******************************************/
#include "stddef.h"
#include "AD_key.h"
#include "SPI_lcd.h"
#include "include.h"



/****************************2、宏定义******************************************/
#define KEY_SUM 16       //设备按键数--16
#define NUM_KEY_SUM 11   //数字按键个数--包括小数点按键
/**********************************************************************
**把11个数字按键的处理封装成PROCESS_ShortNumKey_Of_Page1函数，
**当前情况有16-11=5类按键处理函数，分类如下，实现在ui.c中
**1、上键处理函数 2、下键处理函数 3、OK键处理函数 4、CLR键处理函数 5、数字键处理函数（包括小数点键）
**********************************************************************/
#define PROCESS_KEY_FUNCTION_SUM   KEY_SUM-NUM_KEY_SUM+1           

#define PAGE_SUM 19    //设备界面数--19



/******************************3、类型定义****************************************/
//当前按键枚举
typedef enum
{
	EY_SET=1,
	KEY_OK,
	KEY_CLR,
	KEY_UP,
	KEY_DOWN,

	KEY_0,
	KEY_1,
	KEY_2,
	KEY_3,
	KEY_4,
	KEY_5,
	KEY_6,
	KEY_7,
	KEY_8,
	KEY_9,
	KEY_POINT,
}
TriggleKeyTypedef;


//当前界面枚举
typedef enum
{
	PageInit,					// 上电初始化页面
	PageDefault,				// 默认显示页码
	PageRGZS,					// 人工置数页码
	PageCodeEnt,				// 密码输入页码
	PageCodeChange,			// 密码修改页码
	PageMainMenu,				// 主菜单页码
	PageDTUSet,
	PageSensorMotherConfig,	//传感器母菜单页码
	PageSensorSonPara,			//传感器子菜单1页码
	PageTestSend,				// 发送测试报文页码
	PageParaBak,				// 恢复出厂默认页码
	PageDateTimeSet,			// 日期和时间设置
		
	PageDTUServerSet,			//DTU移动服务参数设置
	PageDTURunModeSet,			//DTU运行参数设置
	PageDTUSMSSet,				//DTU SMS短信参数设置
	PageDTUChan1Set,			//DTU通道1设置
	PageDTUChan2Set,			//DTU通道2设置
	PageDTUChan3Set,			//DTU通道3设置
	PageDTUChan4Set,		    //DTU通道4设置
}
CurrentPageTypedef;

//当前行数枚举
typedef enum
{
	COLUME1,
	COLUME2,
	COLUME3,
	COLUME4,
	COLUME5,
	COLUME6,
	COLUME7,
	COLUME8,
	COLUME9,
	COLUME10,
}
CurrentColumeTypedef;

/******************************4、变量声明****************************************/




/*******************************5、函数声明***************************************/
void LcdUpdateTask(void);
void KeyScanTask(void);

#endif


