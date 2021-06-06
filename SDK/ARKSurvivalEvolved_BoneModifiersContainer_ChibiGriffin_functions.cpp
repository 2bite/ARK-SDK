// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiGriffin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiGriffin.BoneModifiersContainer_ChibiGriffin_C.ExecuteUbergraph_BoneModifiersContainer_ChibiGriffin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiGriffin_C::ExecuteUbergraph_BoneModifiersContainer_ChibiGriffin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiGriffin.BoneModifiersContainer_ChibiGriffin_C.ExecuteUbergraph_BoneModifiersContainer_ChibiGriffin");

	UBoneModifiersContainer_ChibiGriffin_C_ExecuteUbergraph_BoneModifiersContainer_ChibiGriffin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
