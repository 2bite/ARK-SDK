// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiRockGolem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiRockGolem.BoneModifiersContainer_ChibiRockGolem_C.ExecuteUbergraph_BoneModifiersContainer_ChibiRockGolem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiRockGolem_C::ExecuteUbergraph_BoneModifiersContainer_ChibiRockGolem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiRockGolem.BoneModifiersContainer_ChibiRockGolem_C.ExecuteUbergraph_BoneModifiersContainer_ChibiRockGolem");

	UBoneModifiersContainer_ChibiRockGolem_C_ExecuteUbergraph_BoneModifiersContainer_ChibiRockGolem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
