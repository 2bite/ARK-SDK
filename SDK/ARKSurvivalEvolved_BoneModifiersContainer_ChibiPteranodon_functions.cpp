// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiPteranodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiPteranodon.BoneModifiersContainer_ChibiPteranodon_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPteranodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiPteranodon_C::ExecuteUbergraph_BoneModifiersContainer_ChibiPteranodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiPteranodon.BoneModifiersContainer_ChibiPteranodon_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPteranodon");

	UBoneModifiersContainer_ChibiPteranodon_C_ExecuteUbergraph_BoneModifiersContainer_ChibiPteranodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
