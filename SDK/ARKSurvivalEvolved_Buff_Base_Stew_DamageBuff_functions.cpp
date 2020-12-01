// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_Stew_DamageBuff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_Stew_DamageBuff.Buff_Base_Stew_DamageBuff_C.UserConstructionScript
// ()

void ABuff_Base_Stew_DamageBuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_Stew_DamageBuff.Buff_Base_Stew_DamageBuff_C.UserConstructionScript");

	ABuff_Base_Stew_DamageBuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_Stew_DamageBuff.Buff_Base_Stew_DamageBuff_C.ExecuteUbergraph_Buff_Base_Stew_DamageBuff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_Stew_DamageBuff_C::ExecuteUbergraph_Buff_Base_Stew_DamageBuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_Stew_DamageBuff.Buff_Base_Stew_DamageBuff_C.ExecuteUbergraph_Buff_Base_Stew_DamageBuff");

	ABuff_Base_Stew_DamageBuff_C_ExecuteUbergraph_Buff_Base_Stew_DamageBuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
