///////////////////////////////////////////////////////////
//  common.h
//  Implementation of the common
//  Created on:      08-Apr-2009 10:06:32 AM
//  Original author: Tim Kuo
///////////////////////////////////////////////////////////

#ifndef EA_9F454DB8_A969_4830_9B7B_1DCC06D3333D6__INCLUDED_
#define EA_9F454DB8_A969_4830_9B7B_1DCC06D3333D6__INCLUDED_

#define _CONSOLE_DEBUG

#ifdef _CONSOLE_DEBUG
#include <iostream>
#include <iomanip>
#define DBINFO(info, para)\
					{\
					std::cout<<__FILE__<<" Line:"<<std::dec<<__LINE__<<" "<<info<<" "<<std::hex<<para<<std::endl;\
					}
#else
#define DBINFO(info, para) {}
#endif

typedef unsigned int uint32;
typedef unsigned char byte;

#ifndef NULL
#define NULL 0
#endif

#define F_OK (0)
#define W_OK (2)
#define R_OK (4)
#define RW_OK (6)
  
#define MB (1024*1024)
#define MESSAGE_BUFFER_SIZE (4096)
#define ID_MAX_LEN (16)
#define PW_MAX_LEN (16)
#define NAME_MAX_LEN (32)
#define PHONE_MAX_LEN (16)
#define PIC_MAX_SIZE (1.5)
#define ACTION_FLAG (0x80)
#define EVENT_FLAG (0x00)

#define DBCONNECTION_COMMON "COMMONDB"
#define DBCONNECTION_SM "SMDB"

//GROUP should be less than 127
enum GROUP {
	GROUP_COMMON = 0,
	GROUP_STAFFMGNT = 1,
	GROUP_GOODSMGNT = 2,
	GROUP_SHOPMGNT = 3,
	GROUP_CLIENTMGNT = 4,
	GROUP_END
};

//SUBGROUP should be less than 255
enum SUBGROUP_SF {
	SUBGROUP_SF_STAFFBROWSE = 1,
	SUBGROUP_SF_INFOMGNT, // 2
	SUBGROUP_SF_SALARYMGNT, // 3
	SUBGROUP_SF_PASSWORDMGNT, // 4
	SUBGROUP_SF_ADVANCEDMGNT, // 5
	SUBGROUP_SF_END
};

enum ERROR {
	ERROR_NO_ERROR = 0,
	ERROR_DBERROR = -1,
	ERROR_PASSWORD_WRONG = -2,
	ERROR_END
};

enum SINFO {
	SINFO_BROWSE = 0,
	SINFO_MYINFO,
	SINFO_MODIFY,
	SINFO_NEW,
	SINFO_END
};

//Message box warning strings
#define loginWindowTitle "登录错误"
#define smWindowTitle "员工管理"
#define loginErrorWarning "工号或密码错误，请重新输入。"
#define zeroSelectionWarning "您还没有选择选择员工。"
#define emptyNameWarnning "员工姓名不能留空， \n请返回并填写员工姓名。"
#define removeStaffConfirm "确定删除选定员工“%1”？\n如果员工离职，建议您更改该员工状态，而不是在系统中删除该员工。"
#define removeStaffError "未能成功删除选定员工，请重试。"
#define addStaffError "未能成功添加员工，请重试。"
#define modifyStaffError "未能成功修改员工信息，请重试。"
#define jobString "职务"
#define jobRemoveWarning "未能成功删除，可能是还有员工被设置为该职务。"
#define levelString "等级"
#define levelRemoveWarning "未能成功删除，可能是还有员工被设置为该等级。"
#define modifyWaring "未能成功修改，请重试。"
#define leftMark "“"
#define rightMark "”"




#endif
