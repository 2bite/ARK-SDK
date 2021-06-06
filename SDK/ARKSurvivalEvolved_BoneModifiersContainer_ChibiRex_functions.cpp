// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiRex.BoneModifiersContainer_ChibiRex_C.ExecuteUbergraph_BoneModifiersContainer_ChibiRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiRex_C::ExecuteUbergraph_BoneModifiersContainer_ChibiRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiRex.BoneModifiersContainer_ChibiRex_C.ExecuteUbergraph_BoneModifiersContainer_ChibiRex");

	UBoneModifiersContainer_ChibiRex_C_ExecuteUbergraph_BoneModifiersContainer_ChibiRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
