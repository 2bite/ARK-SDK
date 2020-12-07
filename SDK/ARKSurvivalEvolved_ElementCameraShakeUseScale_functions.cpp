// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementCameraShakeUseScale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElementCameraShakeUseScale.ElementCameraShakeUseScale_C.ExecuteUbergraph_ElementCameraShakeUseScale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UElementCameraShakeUseScale_C::ExecuteUbergraph_ElementCameraShakeUseScale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElementCameraShakeUseScale.ElementCameraShakeUseScale_C.ExecuteUbergraph_ElementCameraShakeUseScale");

	UElementCameraShakeUseScale_C_ExecuteUbergraph_ElementCameraShakeUseScale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
