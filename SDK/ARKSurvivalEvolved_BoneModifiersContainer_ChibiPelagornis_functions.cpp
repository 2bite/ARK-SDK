// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiPelagornis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiPelagornis.BoneModifiersContainer_ChibiPelagornis_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPelagornis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiPelagornis_C::ExecuteUbergraph_BoneModifiersContainer_ChibiPelagornis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiPelagornis.BoneModifiersContainer_ChibiPelagornis_C.ExecuteUbergraph_BoneModifiersContainer_ChibiPelagornis");

	UBoneModifiersContainer_ChibiPelagornis_C_ExecuteUbergraph_BoneModifiersContainer_ChibiPelagornis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
