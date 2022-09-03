// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiAmargasaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiAmargasaurus.BoneModifiersContainer_ChibiAmargasaurus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiAmargasaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiAmargasaurus_C::ExecuteUbergraph_BoneModifiersContainer_ChibiAmargasaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiAmargasaurus.BoneModifiersContainer_ChibiAmargasaurus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiAmargasaurus");

	UBoneModifiersContainer_ChibiAmargasaurus_C_ExecuteUbergraph_BoneModifiersContainer_ChibiAmargasaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
