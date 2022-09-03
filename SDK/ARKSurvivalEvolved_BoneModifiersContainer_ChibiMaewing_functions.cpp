// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiMaewing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiMaewing.BoneModifiersContainer_ChibiMaewing_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMaewing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiMaewing_C::ExecuteUbergraph_BoneModifiersContainer_ChibiMaewing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiMaewing.BoneModifiersContainer_ChibiMaewing_C.ExecuteUbergraph_BoneModifiersContainer_ChibiMaewing");

	UBoneModifiersContainer_ChibiMaewing_C_ExecuteUbergraph_BoneModifiersContainer_ChibiMaewing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
