// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiVelonasaur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiVelonasaur.BoneModifiersContainer_ChibiVelonasaur_C.ExecuteUbergraph_BoneModifiersContainer_ChibiVelonasaur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiVelonasaur_C::ExecuteUbergraph_BoneModifiersContainer_ChibiVelonasaur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiVelonasaur.BoneModifiersContainer_ChibiVelonasaur_C.ExecuteUbergraph_BoneModifiersContainer_ChibiVelonasaur");

	UBoneModifiersContainer_ChibiVelonasaur_C_ExecuteUbergraph_BoneModifiersContainer_ChibiVelonasaur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
