// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LightfootstepCameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightfootstepCameraShake.LightfootstepCameraShake_C.ExecuteUbergraph_LightfootstepCameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULightfootstepCameraShake_C::ExecuteUbergraph_LightfootstepCameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightfootstepCameraShake.LightfootstepCameraShake_C.ExecuteUbergraph_LightfootstepCameraShake");

	ULightfootstepCameraShake_C_ExecuteUbergraph_LightfootstepCameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
