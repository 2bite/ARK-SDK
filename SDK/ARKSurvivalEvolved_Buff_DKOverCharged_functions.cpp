// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DKOverCharged_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DKOverCharged.Buff_DKOverCharged_C.UserConstructionScript
// ()

void ABuff_DKOverCharged_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKOverCharged.Buff_DKOverCharged_C.UserConstructionScript");

	ABuff_DKOverCharged_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DKOverCharged.Buff_DKOverCharged_C.ExecuteUbergraph_Buff_DKOverCharged
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DKOverCharged_C::ExecuteUbergraph_Buff_DKOverCharged(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DKOverCharged.Buff_DKOverCharged_C.ExecuteUbergraph_Buff_DKOverCharged");

	ABuff_DKOverCharged_C_ExecuteUbergraph_Buff_DKOverCharged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
