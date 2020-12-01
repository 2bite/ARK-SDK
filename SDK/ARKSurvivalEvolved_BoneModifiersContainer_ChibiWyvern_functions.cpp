// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiWyvern.BoneModifiersContainer_ChibiWyvern_C.ExecuteUbergraph_BoneModifiersContainer_ChibiWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiWyvern_C::ExecuteUbergraph_BoneModifiersContainer_ChibiWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiWyvern.BoneModifiersContainer_ChibiWyvern_C.ExecuteUbergraph_BoneModifiersContainer_ChibiWyvern");

	UBoneModifiersContainer_ChibiWyvern_C_ExecuteUbergraph_BoneModifiersContainer_ChibiWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
