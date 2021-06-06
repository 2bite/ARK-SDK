// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Dragon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMelee_Dragon.DinoAttackStateMelee_Dragon_C.ExecuteUbergraph_DinoAttackStateMelee_Dragon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMelee_Dragon_C::ExecuteUbergraph_DinoAttackStateMelee_Dragon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Dragon.DinoAttackStateMelee_Dragon_C.ExecuteUbergraph_DinoAttackStateMelee_Dragon");

	UDinoAttackStateMelee_Dragon_C_ExecuteUbergraph_DinoAttackStateMelee_Dragon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
