#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZombieDodo_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.RequestModData
struct AZombieDodo_Character_BP_C_RequestModData_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 JsonData;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.RequestModDataProcessing
struct AZombieDodo_Character_BP_C_RequestModDataProcessing_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 InJsonData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 OutJsonData;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.UserConstructionScript
struct AZombieDodo_Character_BP_C_UserConstructionScript_Params
{
};

// Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.SendModData
struct AZombieDodo_Character_BP_C_SendModData_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 JsonData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.ReceiveBeginPlay
struct AZombieDodo_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function ZombieDodo_Character_BP.ZombieDodo_Character_BP_C.ExecuteUbergraph_ZombieDodo_Character_BP
struct AZombieDodo_Character_BP_C_ExecuteUbergraph_ZombieDodo_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
