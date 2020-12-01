// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GriffinDiveBomb_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GriffinDiveBomb_CameraShake.GriffinDiveBomb_CameraShake_C.ExecuteUbergraph_GriffinDiveBomb_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGriffinDiveBomb_CameraShake_C::ExecuteUbergraph_GriffinDiveBomb_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GriffinDiveBomb_CameraShake.GriffinDiveBomb_CameraShake_C.ExecuteUbergraph_GriffinDiveBomb_CameraShake");

	UGriffinDiveBomb_CameraShake_C_ExecuteUbergraph_GriffinDiveBomb_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
