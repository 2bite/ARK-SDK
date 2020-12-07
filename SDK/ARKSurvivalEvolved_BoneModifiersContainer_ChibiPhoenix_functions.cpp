// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiPhoenix_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiPhoenix.BoneModifiersContainer_ChibiPhoenix_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPhoenix
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiPhoenix_C::ExecuteUbergraph_BoneModifiersContainer_ChibiPhoenix(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiPhoenix.BoneModifiersContainer_ChibiPhoenix_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPhoenix");

	UBoneModifiersContainer_ChibiPhoenix_C_ExecuteUbergraph_BoneModifiersContainer_ChibiPhoenix_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
