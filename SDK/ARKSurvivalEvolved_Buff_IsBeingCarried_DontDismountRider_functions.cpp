// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IsBeingCarried_DontDismountRider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_IsBeingCarried_DontDismountRider.Buff_IsBeingCarried_DontDismountRider_C.UserConstructionScript
// ()

void ABuff_IsBeingCarried_DontDismountRider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried_DontDismountRider.Buff_IsBeingCarried_DontDismountRider_C.UserConstructionScript");

	ABuff_IsBeingCarried_DontDismountRider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_IsBeingCarried_DontDismountRider.Buff_IsBeingCarried_DontDismountRider_C.ExecuteUbergraph_Buff_IsBeingCarried_DontDismountRider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_IsBeingCarried_DontDismountRider_C::ExecuteUbergraph_Buff_IsBeingCarried_DontDismountRider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_IsBeingCarried_DontDismountRider.Buff_IsBeingCarried_DontDismountRider_C.ExecuteUbergraph_Buff_IsBeingCarried_DontDismountRider");

	ABuff_IsBeingCarried_DontDismountRider_C_ExecuteUbergraph_Buff_IsBeingCarried_DontDismountRider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
