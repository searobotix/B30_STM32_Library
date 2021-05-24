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

void WFI_SET(void)
{
	__ASM volatile("wfi");		  
}
//关闭所有中断
void INTX_DISABLE(void)
{		  
	__ASM volatile("cpsid i");
}
//开启所有中断
void INTX_ENABLE(void)
{
	__ASM volatile("cpsie i");		  
}
//设置栈顶地址
//addr:栈顶地址
__asm void MSR_MSP(u32 addr) 
{
    MSR MSP, r0 			//设置主栈栈值
    BX r14
}

//Searobotix
						


