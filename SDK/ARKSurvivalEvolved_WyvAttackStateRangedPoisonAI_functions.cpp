// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvAttackStateRangedPoisonAI_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvAttackStateRangedPoisonAI.WyvAttackStateRangedPoisonAI_C.ExecuteUbergraph_WyvAttackStateRangedPoisonAI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWyvAttackStateRangedPoisonAI_C::ExecuteUbergraph_WyvAttackStateRangedPoisonAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvAttackStateRangedPoisonAI.WyvAttackStateRangedPoisonAI_C.ExecuteUbergraph_WyvAttackStateRangedPoisonAI");

	UWyvAttackStateRangedPoisonAI_C_ExecuteUbergraph_WyvAttackStateRangedPoisonAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
