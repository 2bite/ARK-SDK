// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRanged_Dragon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateRanged_Dragon.DinoAttackStateRanged_Dragon_C.ExecuteUbergraph_DinoAttackStateRanged_Dragon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRanged_Dragon_C::ExecuteUbergraph_DinoAttackStateRanged_Dragon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Dragon.DinoAttackStateRanged_Dragon_C.ExecuteUbergraph_DinoAttackStateRanged_Dragon");

	UDinoAttackStateRanged_Dragon_C_ExecuteUbergraph_DinoAttackStateRanged_Dragon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
