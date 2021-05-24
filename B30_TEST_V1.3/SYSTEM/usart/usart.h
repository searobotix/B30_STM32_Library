#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "sys.h" 

/////////////////////////////////////////////////////////////////////////////////////////		 
//B30 深度传感器测试例程
//开发板：SeaRobotix STM32 Test Board
//官方网站：http://searobotix.com
//修改日期: 2020/12/21
//例程版本：V1.3
//联系邮箱：info@searobotix.com
//特别声明：本程序来源于网络，使用者自行承担一切后果！
/////////////////////////////////////////////////////////////////////////////////////////	

#define USART_REC_LEN  			200  	      //定义最大接收字节数 200
#define EN_USART1_RX 			  1		        //使能（1）/禁止（0）串口1接收
	  	
extern u8  USART_RX_BUF[USART_REC_LEN]; //接收缓冲,最大USART_REC_LEN个字节.末字节为换行符 
extern u16 USART_RX_STA;         		    //接收状态标记	
//如果想串口中断接收，请不要注释以下宏定义
void uart_init(u32 bound);
#endif



// Searobotix			
