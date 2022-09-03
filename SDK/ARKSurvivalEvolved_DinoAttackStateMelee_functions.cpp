// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee.DinoAttackStateMelee_C.ExecuteUbergraph_DinoAttackStateMelee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_C::ExecuteUbergraph_DinoAttackStateMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee.DinoAttackStateMelee_C.ExecuteUbergraph_DinoAttackStateMelee");

	UDinoAttackStateMelee_C_ExecuteUbergraph_DinoAttackStateMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
