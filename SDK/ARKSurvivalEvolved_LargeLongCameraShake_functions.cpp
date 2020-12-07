// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LargeLongCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LargeLongCameraShake.LargeLongCameraShake_C.ExecuteUbergraph_LargeLongCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULargeLongCameraShake_C::ExecuteUbergraph_LargeLongCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LargeLongCameraShake.LargeLongCameraShake_C.ExecuteUbergraph_LargeLongCameraShake");

	ULargeLongCameraShake_C_ExecuteUbergraph_LargeLongCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
