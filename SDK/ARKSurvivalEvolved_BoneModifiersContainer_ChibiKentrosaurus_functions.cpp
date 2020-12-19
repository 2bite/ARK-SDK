// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiKentrosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiKentrosaurus.BoneModifiersContainer_ChibiKentrosaurus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiKentrosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiKentrosaurus_C::ExecuteUbergraph_BoneModifiersContainer_ChibiKentrosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiKentrosaurus.BoneModifiersContainer_ChibiKentrosaurus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiKentrosaurus");

	UBoneModifiersContainer_ChibiKentrosaurus_C_ExecuteUbergraph_BoneModifiersContainer_ChibiKentrosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
