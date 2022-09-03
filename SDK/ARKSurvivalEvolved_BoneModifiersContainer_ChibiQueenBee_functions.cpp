// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiQueenBee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BoneModifiersContainer_ChibiQueenBee.BoneModifiersContainer_ChibiQueenBee_C.ExecuteUbergraph_BoneModifiersContainer_ChibiQueenBee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModifiersContainer_ChibiQueenBee_C::ExecuteUbergraph_BoneModifiersContainer_ChibiQueenBee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneModifiersContainer_ChibiQueenBee.BoneModifiersContainer_ChibiQueenBee_C.ExecuteUbergraph_BoneModifiersContainer_ChibiQueenBee");

	UBoneModifiersContainer_ChibiQueenBee_C_ExecuteUbergraph_BoneModifiersContainer_ChibiQueenBee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
