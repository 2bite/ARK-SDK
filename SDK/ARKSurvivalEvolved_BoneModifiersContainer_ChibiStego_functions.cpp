// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiStego_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiStego.BoneModifiersContainer_ChibiStego_C.ExecuteUbergraph_BoneModifiersContainer_ChibiStego
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiStego_C::ExecuteUbergraph_BoneModifiersContainer_ChibiStego(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiStego.BoneModifiersContainer_ChibiStego_C.ExecuteUbergraph_BoneModifiersContainer_ChibiStego");

	UBoneModifiersContainer_ChibiStego_C_ExecuteUbergraph_BoneModifiersContainer_ChibiStego_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
