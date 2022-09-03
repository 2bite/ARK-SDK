// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiGallimimus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiGallimimus.BoneModifiersContainer_ChibiGallimimus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiGallimimus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiGallimimus_C::ExecuteUbergraph_BoneModifiersContainer_ChibiGallimimus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiGallimimus.BoneModifiersContainer_ChibiGallimimus_C.ExecuteUbergraph_BoneModifiersContainer_ChibiGallimimus");

	UBoneModifiersContainer_ChibiGallimimus_C_ExecuteUbergraph_BoneModifiersContainer_ChibiGallimimus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
