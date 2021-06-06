// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSniper_FireCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSniper_FireCameraShake.WeapSniper_FireCameraShake_C.ExecuteUbergraph_WeapSniper_FireCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapSniper_FireCameraShake_C::ExecuteUbergraph_WeapSniper_FireCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSniper_FireCameraShake.WeapSniper_FireCameraShake_C.ExecuteUbergraph_WeapSniper_FireCameraShake");

	UWeapSniper_FireCameraShake_C_ExecuteUbergraph_WeapSniper_FireCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
