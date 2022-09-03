#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ModCommunication_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModDataProcessing
struct UModCommunication_Interface_C_RequestModDataProcessing_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 InJsonData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 OutJsonData;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ModCommunication_Interface.ModCommunication_Interface_C.RequestModData
struct UModCommunication_Interface_C_RequestModData_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 JsonData;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ModCommunication_Interface.ModCommunication_Interface_C.SendModData
struct UModCommunication_Interface_C_SendModData_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UJsonObject*                                 JsonData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
