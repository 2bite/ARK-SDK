// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateRangedMedium_Leading_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateRangedMedium_Leading.DinoAttackStateRangedMedium_Leading_C.ExecuteUbergraph_DinoAttackStateRangedMedium_Leading
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateRangedMedium_Leading_C::ExecuteUbergraph_DinoAttackStateRangedMedium_Leading(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateRangedMedium_Leading.DinoAttackStateRangedMedium_Leading_C.ExecuteUbergraph_DinoAttackStateRangedMedium_Leading");

	UDinoAttackStateRangedMedium_Leading_C_ExecuteUbergraph_DinoAttackStateRangedMedium_Leading_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
