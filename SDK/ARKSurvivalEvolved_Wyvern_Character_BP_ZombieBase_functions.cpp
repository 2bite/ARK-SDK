// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_ZombieBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModData
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             JsonData                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_ZombieBase_C::RequestModData(const struct FName& Key, class UJsonObject** JsonData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModData");

	AWyvern_Character_BP_ZombieBase_C_RequestModData_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JsonData != nullptr)
		*JsonData = params.JsonData;
}


// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModDataProcessing
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             InJsonData                     (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             OutJsonData                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_ZombieBase_C::RequestModDataProcessing(const struct FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.RequestModDataProcessing");

	AWyvern_Character_BP_ZombieBase_C_RequestModDataProcessing_Params params;
	params.Key = Key;
	params.InJsonData = InJsonData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutJsonData != nullptr)
		*OutJsonData = params.OutJsonData;
}


// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.UserConstructionScript
// ()

void AWyvern_Character_BP_ZombieBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.UserConstructionScript");

	AWyvern_Character_BP_ZombieBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ReceiveBeginPlay
// ()

void AWyvern_Character_BP_ZombieBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ReceiveBeginPlay");

	AWyvern_Character_BP_ZombieBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.SendModData
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// class UJsonObject*             JsonData                       (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_ZombieBase_C::SendModData(const struct FName& Key, class UJsonObject* JsonData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.SendModData");

	AWyvern_Character_BP_ZombieBase_C_SendModData_Params params;
	params.Key = Key;
	params.JsonData = JsonData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ExecuteUbergraph_Wyvern_Character_BP_ZombieBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_ZombieBase_C::ExecuteUbergraph_Wyvern_Character_BP_ZombieBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombieBase.Wyvern_Character_BP_ZombieBase_C.ExecuteUbergraph_Wyvern_Character_BP_ZombieBase");

	AWyvern_Character_BP_ZombieBase_C_ExecuteUbergraph_Wyvern_Character_BP_ZombieBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
