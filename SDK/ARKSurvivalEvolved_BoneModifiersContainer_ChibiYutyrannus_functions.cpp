// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiYutyrannus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiYutyrannus.BoneModifiersContainer_ChibiYutyrannus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiYutyrannus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiYutyrannus_C::ExecuteUbergraph_BoneModifiersContainer_ChibiYutyrannus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiYutyrannus.BoneModifiersContainer_ChibiYutyrannus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiYutyrannus");

	UBoneModifiersContainer_ChibiYutyrannus_C_ExecuteUbergraph_BoneModifiersContainer_ChibiYutyrannus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
