// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvAttackStateRangedLightning_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvAttackStateRangedLightning.WyvAttackStateRangedLightning_C.ExecuteUbergraph_WyvAttackStateRangedLightning
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWyvAttackStateRangedLightning_C::ExecuteUbergraph_WyvAttackStateRangedLightning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvAttackStateRangedLightning.WyvAttackStateRangedLightning_C.ExecuteUbergraph_WyvAttackStateRangedLightning");

	UWyvAttackStateRangedLightning_C_ExecuteUbergraph_WyvAttackStateRangedLightning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
