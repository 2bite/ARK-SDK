// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiTapejara_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiTapejara.BoneModifiersContainer_ChibiTapejara_C.ExecuteUbergraph_BoneModifiersContainer_ChibiTapejara
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiTapejara_C::ExecuteUbergraph_BoneModifiersContainer_ChibiTapejara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiTapejara.BoneModifiersContainer_ChibiTapejara_C.ExecuteUbergraph_BoneModifiersContainer_ChibiTapejara");

	UBoneModifiersContainer_ChibiTapejara_C_ExecuteUbergraph_BoneModifiersContainer_ChibiTapejara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
