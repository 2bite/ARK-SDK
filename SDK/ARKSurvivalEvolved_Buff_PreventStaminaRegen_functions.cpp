// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventStaminaRegen_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventStaminaRegen_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.BPSetupForInstigator");

	ABuff_PreventStaminaRegen_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.UserConstructionScript
// ()

void ABuff_PreventStaminaRegen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.UserConstructionScript");

	ABuff_PreventStaminaRegen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.ExecuteUbergraph_Buff_PreventStaminaRegen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PreventStaminaRegen_C::ExecuteUbergraph_Buff_PreventStaminaRegen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.ExecuteUbergraph_Buff_PreventStaminaRegen");

	ABuff_PreventStaminaRegen_C_ExecuteUbergraph_Buff_PreventStaminaRegen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
