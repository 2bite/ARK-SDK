// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Phoenix_OnFire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Phoenix_OnFire.Buff_Phoenix_OnFire_C.UserConstructionScript
// ()

void ABuff_Phoenix_OnFire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Phoenix_OnFire.Buff_Phoenix_OnFire_C.UserConstructionScript");

	ABuff_Phoenix_OnFire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Phoenix_OnFire.Buff_Phoenix_OnFire_C.ExecuteUbergraph_Buff_Phoenix_OnFire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Phoenix_OnFire_C::ExecuteUbergraph_Buff_Phoenix_OnFire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Phoenix_OnFire.Buff_Phoenix_OnFire_C.ExecuteUbergraph_Buff_Phoenix_OnFire");

	ABuff_Phoenix_OnFire_C_ExecuteUbergraph_Buff_Phoenix_OnFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
