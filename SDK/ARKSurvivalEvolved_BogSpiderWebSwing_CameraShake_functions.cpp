// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpiderWebSwing_CameraShake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BogSpiderWebSwing_CameraShake.BogSpiderWebSwing_CameraShake_C.ExecuteUbergraph_BogSpiderWebSwing_CameraShake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBogSpiderWebSwing_CameraShake_C::ExecuteUbergraph_BogSpiderWebSwing_CameraShake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BogSpiderWebSwing_CameraShake.BogSpiderWebSwing_CameraShake_C.ExecuteUbergraph_BogSpiderWebSwing_CameraShake");

	UBogSpiderWebSwing_CameraShake_C_ExecuteUbergraph_BogSpiderWebSwing_CameraShake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
