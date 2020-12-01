// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSpear_FireCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapSpear_FireCameraShake.WeapSpear_FireCameraShake_C.ExecuteUbergraph_WeapSpear_FireCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapSpear_FireCameraShake_C::ExecuteUbergraph_WeapSpear_FireCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapSpear_FireCameraShake.WeapSpear_FireCameraShake_C.ExecuteUbergraph_WeapSpear_FireCameraShake");

	UWeapSpear_FireCameraShake_C_ExecuteUbergraph_WeapSpear_FireCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
