#ifndef _INTERFACE_1553_H
#define _INTERFACE_1553_H

#define DLL_EXPORT __declspec(dllexport)
extern "C"
{

typedef struct _callback_1553 
{
	int msgId;/*消息ID，预留*/
	int src;/*物理通道信息，具体含义如下
			  0-7：节点ID，BC为0，RT为1，BM为2 
			  8-15：通道ID 
			  16-23：板卡ID	*/
	unsigned char srcAddr;
	unsigned char subSrcAddr;
	unsigned char dstAddr;
	unsigned char subDstAddr;
	unsigned short cmd1;/*命令字1*/
	unsigned short cmd2;/*命令字2*/
	unsigned short status1;/*状态字1*/
	unsigned short status2;/*状态字2*/
	int sec;
	int usec;
	int length;/*有效数据长度*/
	char payload[64];/*有效数据*/
}CALLBACK_1553;

typedef   void  (__stdcall *HR_CALLBACK)(void* pCallbackInfo, void* pParam);

/************************************************************/
/* 函数名称：	open
 * 功能描述：	根据传入的配置信息打开硬件板卡
 * 传递参数：	confStr - 传入的xml格式的配置参数，
 *						  用于描述板卡个数以及板卡ID等信息
 * 返 回 值：	成功返回0，失败返回其他
/************************************************************/
DLL_EXPORT int open(char* confStr);

/************************************************************/
/* 函数名称：	init
 * 功能描述：	板卡初始化函数
 * 传递参数：	initStr - 传入的xml格式的配置参数，
 *						  该函数根据配置信息初始化BC/RT/BM
 * 返 回 值：	成功返回0，失败返回其他
/************************************************************/
DLL_EXPORT int init(char* initStr);

/************************************************************/
/* 函数名称：	start
 * 功能描述：	板卡启动函数，启动数据发送与采集
 * 传递参数：	无
 * 返 回 值：	成功返回0，失败返回其他
/************************************************************/
DLL_EXPORT int start();

/************************************************************/
/* 函数名称：	stop
 * 功能描述：	板卡停止函数，停止数据发送与采集
 * 传递参数：	无
 * 返 回 值：	成功返回0，失败返回其他
/************************************************************/
DLL_EXPORT int stop();

/************************************************************/
/* 函数名称：	writeMsg
 * 功能描述：	板卡数据发送（更新）函数，根据传入的msgId查
 *				找到对应的硬件通道，并将数据发送（更新）
 * 传递参数：	msgId - 消息ID，消息的唯一标识
 *				pPayload - 消息包含的有效数据信息
 *				nLen - 有效数据长度
 * 返 回 值：	成功返回0，失败返回其他
/************************************************************/
DLL_EXPORT int writeMsg(int msgId,char* pPayload,int nLen);

/************************************************************/
/* 函数名称：	addListener
 * 功能描述：	注册监听函数
 * 传递参数：	listener - 监听函数指针
 * 返 回 值：	无
/************************************************************/
DLL_EXPORT void addListener(HR_CALLBACK listener);

/************************************************************/
/* 函数名称：	close
 * 功能描述：	根据传入的配置信息关闭硬件板卡
 * 传递参数：	confStr - 传入的xml格式的配置参数，
 *						  用于描述板卡个数以及板卡ID等信息
 * 返 回 值：	成功返回0，失败返回其他
/************************************************************/
DLL_EXPORT int close(char* confStr);

/************************************************************/
/* 函数名称：	getLastErr
 * 功能描述：	获取上次的错误信息描述
 * 传递参数：	无
 * 返 回 值：	上次的错误信息描述
/************************************************************/
DLL_EXPORT char* getLastErr();

DWORD WINAPI recvThread(void* pParam);
};
#endif