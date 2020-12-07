// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PostPoisonousTrap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PostPoisonousTrap.Buff_PostPoisonousTrap_C.UserConstructionScript
// ()

void ABuff_PostPoisonousTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PostPoisonousTrap.Buff_PostPoisonousTrap_C.UserConstructionScript");

	ABuff_PostPoisonousTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PostPoisonousTrap.Buff_PostPoisonousTrap_C.ExecuteUbergraph_Buff_PostPoisonousTrap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PostPoisonousTrap_C::ExecuteUbergraph_Buff_PostPoisonousTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PostPoisonousTrap.Buff_PostPoisonousTrap_C.ExecuteUbergraph_Buff_PostPoisonousTrap");

	ABuff_PostPoisonousTrap_C_ExecuteUbergraph_Buff_PostPoisonousTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
