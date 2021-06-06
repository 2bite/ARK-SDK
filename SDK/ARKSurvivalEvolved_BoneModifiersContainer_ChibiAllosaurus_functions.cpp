// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiAllosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiAllosaurus.BoneModifiersContainer_ChibiAllosaurus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiAllosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiAllosaurus_C::ExecuteUbergraph_BoneModifiersContainer_ChibiAllosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiAllosaurus.BoneModifiersContainer_ChibiAllosaurus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiAllosaurus");

	UBoneModifiersContainer_ChibiAllosaurus_C_ExecuteUbergraph_BoneModifiersContainer_ChibiAllosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
