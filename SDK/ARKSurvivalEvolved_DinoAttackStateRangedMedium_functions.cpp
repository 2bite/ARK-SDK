// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRangedMedium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateRangedMedium.DinoAttackStateRangedMedium_C.ExecuteUbergraph_DinoAttackStateRangedMedium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRangedMedium_C::ExecuteUbergraph_DinoAttackStateRangedMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRangedMedium.DinoAttackStateRangedMedium_C.ExecuteUbergraph_DinoAttackStateRangedMedium");

	UDinoAttackStateRangedMedium_C_ExecuteUbergraph_DinoAttackStateRangedMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
