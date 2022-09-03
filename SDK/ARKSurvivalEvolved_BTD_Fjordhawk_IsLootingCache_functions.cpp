// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTD_Fjordhawk_IsLootingCache_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTD_Fjordhawk_IsLootingCache.BTD_Fjordhawk_IsLootingCache_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTD_Fjordhawk_IsLootingCache_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTD_Fjordhawk_IsLootingCache.BTD_Fjordhawk_IsLootingCache_C.ReceiveConditionCheck");

	UBTD_Fjordhawk_IsLootingCache_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTD_Fjordhawk_IsLootingCache.BTD_Fjordhawk_IsLootingCache_C.ExecuteUbergraph_BTD_Fjordhawk_IsLootingCache
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTD_Fjordhawk_IsLootingCache_C::ExecuteUbergraph_BTD_Fjordhawk_IsLootingCache(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTD_Fjordhawk_IsLootingCache.BTD_Fjordhawk_IsLootingCache_C.ExecuteUbergraph_BTD_Fjordhawk_IsLootingCache");

	UBTD_Fjordhawk_IsLootingCache_C_ExecuteUbergraph_BTD_Fjordhawk_IsLootingCache_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
