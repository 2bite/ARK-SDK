// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVTEKMeleeCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FPVTEKMeleeCameraShake.FPVTEKMeleeCameraShake_C.ExecuteUbergraph_FPVTEKMeleeCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPVTEKMeleeCameraShake_C::ExecuteUbergraph_FPVTEKMeleeCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPVTEKMeleeCameraShake.FPVTEKMeleeCameraShake_C.ExecuteUbergraph_FPVTEKMeleeCameraShake");

	UFPVTEKMeleeCameraShake_C_ExecuteUbergraph_FPVTEKMeleeCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
