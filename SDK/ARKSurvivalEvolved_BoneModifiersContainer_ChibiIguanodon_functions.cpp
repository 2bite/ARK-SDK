// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiIguanodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiIguanodon.BoneModifiersContainer_ChibiIguanodon_C.ExecuteUbergraph_BoneModifiersContainer_ChibiIguanodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiIguanodon_C::ExecuteUbergraph_BoneModifiersContainer_ChibiIguanodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiIguanodon.BoneModifiersContainer_ChibiIguanodon_C.ExecuteUbergraph_BoneModifiersContainer_ChibiIguanodon");

	UBoneModifiersContainer_ChibiIguanodon_C_ExecuteUbergraph_BoneModifiersContainer_ChibiIguanodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
