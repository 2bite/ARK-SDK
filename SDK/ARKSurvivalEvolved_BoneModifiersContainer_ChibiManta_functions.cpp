// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiManta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiManta.BoneModifiersContainer_ChibiManta_C.ExecuteUbergraph_BoneModifiersContainer_ChibiManta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiManta_C::ExecuteUbergraph_BoneModifiersContainer_ChibiManta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiManta.BoneModifiersContainer_ChibiManta_C.ExecuteUbergraph_BoneModifiersContainer_ChibiManta");

	UBoneModifiersContainer_ChibiManta_C_ExecuteUbergraph_BoneModifiersContainer_ChibiManta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
