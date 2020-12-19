// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_ExtraFishRadius_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_ExtraFishRadius.DinoAttackStateMelee_ExtraFishRadius_C.ExecuteUbergraph_DinoAttackStateMelee_ExtraFishRadius
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_ExtraFishRadius_C::ExecuteUbergraph_DinoAttackStateMelee_ExtraFishRadius(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_ExtraFishRadius.DinoAttackStateMelee_ExtraFishRadius_C.ExecuteUbergraph_DinoAttackStateMelee_ExtraFishRadius");

	UDinoAttackStateMelee_ExtraFishRadius_C_ExecuteUbergraph_DinoAttackStateMelee_ExtraFishRadius_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
