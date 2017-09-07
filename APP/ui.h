#ifndef _UI_H
#define _UI_H
/****************************1��ͷ�ļ�******************************************/
#include "stddef.h"
#include "AD_key.h"
#include "SPI_lcd.h"
#include "include.h"



/****************************2���궨��******************************************/
#define KEY_SUM 16       //�豸������--16
#define NUM_KEY_SUM 11   //���ְ�������--����С���㰴��
/**********************************************************************
**��11�����ְ����Ĵ����װ��PROCESS_ShortNumKey_Of_Page1������
**��ǰ�����16-11=5�ఴ�����������������£�ʵ����ui.c��
**1���ϼ������� 2���¼������� 3��OK�������� 4��CLR�������� 5�����ּ�������������С�������
**********************************************************************/
#define PROCESS_KEY_FUNCTION_SUM   KEY_SUM-NUM_KEY_SUM+1           

#define PAGE_SUM 19    //�豸������--19



/******************************3�����Ͷ���****************************************/
//��ǰ����ö��
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


//��ǰ����ö��
typedef enum
{
	PageInit,					// �ϵ��ʼ��ҳ��
	PageDefault,				// Ĭ����ʾҳ��
	PageRGZS,					// �˹�����ҳ��
	PageCodeEnt,				// ��������ҳ��
	PageCodeChange,			// �����޸�ҳ��
	PageMainMenu,				// ���˵�ҳ��
	PageDTUSet,
	PageSensorMotherConfig,	//������ĸ�˵�ҳ��
	PageSensorSonPara,			//�������Ӳ˵�1ҳ��
	PageTestSend,				// ���Ͳ��Ա���ҳ��
	PageParaBak,				// �ָ�����Ĭ��ҳ��
	PageDateTimeSet,			// ���ں�ʱ������
		
	PageDTUServerSet,			//DTU�ƶ������������
	PageDTURunModeSet,			//DTU���в�������
	PageDTUSMSSet,				//DTU SMS���Ų�������
	PageDTUChan1Set,			//DTUͨ��1����
	PageDTUChan2Set,			//DTUͨ��2����
	PageDTUChan3Set,			//DTUͨ��3����
	PageDTUChan4Set,		    //DTUͨ��4����
}
CurrentPageTypedef;

//��ǰ����ö��
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

/******************************4����������****************************************/




/*******************************5����������***************************************/
void LcdUpdateTask(void);
void KeyScanTask(void);

#endif


