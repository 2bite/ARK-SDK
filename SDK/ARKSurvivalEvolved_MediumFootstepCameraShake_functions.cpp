// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MediumFootstepCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediumFootstepCameraShake.MediumFootstepCameraShake_C.ExecuteUbergraph_MediumFootstepCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMediumFootstepCameraShake_C::ExecuteUbergraph_MediumFootstepCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediumFootstepCameraShake.MediumFootstepCameraShake_C.ExecuteUbergraph_MediumFootstepCameraShake");

	UMediumFootstepCameraShake_C_ExecuteUbergraph_MediumFootstepCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
