// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiKairuku_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiKairuku.BoneModifiersContainer_ChibiKairuku_C.ExecuteUbergraph_BoneModifiersContainer_ChibiKairuku
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiKairuku_C::ExecuteUbergraph_BoneModifiersContainer_ChibiKairuku(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiKairuku.BoneModifiersContainer_ChibiKairuku_C.ExecuteUbergraph_BoneModifiersContainer_ChibiKairuku");

	UBoneModifiersContainer_ChibiKairuku_C_ExecuteUbergraph_BoneModifiersContainer_ChibiKairuku_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
