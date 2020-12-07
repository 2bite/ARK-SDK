#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_ZombieBase_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModData
struct AWyvern_Character_BP_ZombieBase_C_RequestModData_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 JsonData;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModDataProcessing
struct AWyvern_Character_BP_ZombieBase_C_RequestModDataProcessing_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 InJsonData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 OutJsonData;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.UserConstructionScript
struct AWyvern_Character_BP_ZombieBase_C_UserConstructionScript_Params
{
};

// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ReceiveBeginPlay
struct AWyvern_Character_BP_ZombieBase_C_ReceiveBeginPlay_Params
{
};

// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.SendModData
struct AWyvern_Character_BP_ZombieBase_C_SendModData_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 JsonData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ExecuteUbergraph_Wyvern_Character_BP_ZombieBase
struct AWyvern_Character_BP_ZombieBase_C_ExecuteUbergraph_Wyvern_Character_BP_ZombieBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
