// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateGrabAndRelease_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateGrabAndRelease.DinoAttackStateGrabAndRelease_C.ExecuteUbergraph_DinoAttackStateGrabAndRelease
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateGrabAndRelease_C::ExecuteUbergraph_DinoAttackStateGrabAndRelease(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateGrabAndRelease.DinoAttackStateGrabAndRelease_C.ExecuteUbergraph_DinoAttackStateGrabAndRelease");

	UDinoAttackStateGrabAndRelease_C_ExecuteUbergraph_DinoAttackStateGrabAndRelease_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
