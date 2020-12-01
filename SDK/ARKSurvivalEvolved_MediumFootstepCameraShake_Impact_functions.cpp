// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MediumFootstepCameraShake_Impact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediumFootstepCameraShake_Impact.MediumFootstepCameraShake_Impact_C.ExecuteUbergraph_MediumFootstepCameraShake_Impact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMediumFootstepCameraShake_Impact_C::ExecuteUbergraph_MediumFootstepCameraShake_Impact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediumFootstepCameraShake_Impact.MediumFootstepCameraShake_Impact_C.ExecuteUbergraph_MediumFootstepCameraShake_Impact");

	UMediumFootstepCameraShake_Impact_C_ExecuteUbergraph_MediumFootstepCameraShake_Impact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
