// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVMeleeCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FPVMeleeCameraShake.FPVMeleeCameraShake_C.ExecuteUbergraph_FPVMeleeCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFPVMeleeCameraShake_C::ExecuteUbergraph_FPVMeleeCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FPVMeleeCameraShake.FPVMeleeCameraShake_C.ExecuteUbergraph_FPVMeleeCameraShake");

	UFPVMeleeCameraShake_C_ExecuteUbergraph_FPVMeleeCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
