// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiSaber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiSaber.BoneModifiersContainer_ChibiSaber_C.ExecuteUbergraph_BoneModifiersContainer_ChibiSaber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiSaber_C::ExecuteUbergraph_BoneModifiersContainer_ChibiSaber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiSaber.BoneModifiersContainer_ChibiSaber_C.ExecuteUbergraph_BoneModifiersContainer_ChibiSaber");

	UBoneModifiersContainer_ChibiSaber_C_ExecuteUbergraph_BoneModifiersContainer_ChibiSaber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
