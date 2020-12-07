// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaiju_Character_BP_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.SetVar_FKArenaManager
// ()
// Parameters:
// class AActor*                  ArenaManager                   (Parm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_Character_BP_Interface_C::SetVar_FKArenaManager(class AActor* ArenaManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.SetVar_FKArenaManager");

	UForestKaiju_Character_BP_Interface_C_SetVar_FKArenaManager_Params params;
	params.ArenaManager = ArenaManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.CallFunc_StunKaiju
// ()

void UForestKaiju_Character_BP_Interface_C::CallFunc_StunKaiju()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.CallFunc_StunKaiju");

	UForestKaiju_Character_BP_Interface_C_CallFunc_StunKaiju_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.GetVar_IsProtecting
// ()
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UForestKaiju_Character_BP_Interface_C::GetVar_IsProtecting(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForestKaiju_Character_BP_Interface.ForestKaiju_Character_BP_Interface_C.GetVar_IsProtecting");

	UForestKaiju_Character_BP_Interface_C_GetVar_IsProtecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
