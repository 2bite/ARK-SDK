// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChargedTekCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChargedTekCameraShake.ChargedTekCameraShake_C.ExecuteUbergraph_ChargedTekCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChargedTekCameraShake_C::ExecuteUbergraph_ChargedTekCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChargedTekCameraShake.ChargedTekCameraShake_C.ExecuteUbergraph_ChargedTekCameraShake");

	UChargedTekCameraShake_C_ExecuteUbergraph_ChargedTekCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
