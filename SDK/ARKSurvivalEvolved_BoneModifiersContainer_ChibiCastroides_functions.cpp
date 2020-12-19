// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiCastroides_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiCastroides.BoneModifiersContainer_ChibiCastroides_C.ExecuteUbergraph_BoneModifiersContainer_ChibiCastroides
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiCastroides_C::ExecuteUbergraph_BoneModifiersContainer_ChibiCastroides(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiCastroides.BoneModifiersContainer_ChibiCastroides_C.ExecuteUbergraph_BoneModifiersContainer_ChibiCastroides");

	UBoneModifiersContainer_ChibiCastroides_C_ExecuteUbergraph_BoneModifiersContainer_ChibiCastroides_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
