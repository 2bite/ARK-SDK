// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvAttackStateRangedPoison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvAttackStateRangedPoison.WyvAttackStateRangedPoison_C.ExecuteUbergraph_WyvAttackStateRangedPoison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWyvAttackStateRangedPoison_C::ExecuteUbergraph_WyvAttackStateRangedPoison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvAttackStateRangedPoison.WyvAttackStateRangedPoison_C.ExecuteUbergraph_WyvAttackStateRangedPoison");

	UWyvAttackStateRangedPoison_C_ExecuteUbergraph_WyvAttackStateRangedPoison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
