// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiMammoth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiMammoth.BoneModifiersContainer_ChibiMammoth_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMammoth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiMammoth_C::ExecuteUbergraph_BoneModifiersContainer_ChibiMammoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiMammoth.BoneModifiersContainer_ChibiMammoth_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMammoth");

	UBoneModifiersContainer_ChibiMammoth_C_ExecuteUbergraph_BoneModifiersContainer_ChibiMammoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
