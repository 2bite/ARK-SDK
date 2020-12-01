#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DodoRex_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DodoRex_Character_BP.DodoRex_Character_BP_C.RequestModData
struct ADodoRex_Character_BP_C_RequestModData_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 JsonData;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DodoRex_Character_BP.DodoRex_Character_BP_C.RequestModDataProcessing
struct ADodoRex_Character_BP_C_RequestModDataProcessing_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 InJsonData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 OutJsonData;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DodoRex_Character_BP.DodoRex_Character_BP_C.UserConstructionScript
struct ADodoRex_Character_BP_C_UserConstructionScript_Params
{
};

// Function DodoRex_Character_BP.DodoRex_Character_BP_C.SendModData
struct ADodoRex_Character_BP_C_SendModData_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 JsonData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DodoRex_Character_BP.DodoRex_Character_BP_C.ExecuteUbergraph_DodoRex_Character_BP
struct ADodoRex_Character_BP_C_ExecuteUbergraph_DodoRex_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
