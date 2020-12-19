// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BasiliskAttackStateRangedPoison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BasiliskAttackStateRangedPoison.BasiliskAttackStateRangedPoison_C.ExecuteUbergraph_BasiliskAttackStateRangedPoison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBasiliskAttackStateRangedPoison_C::ExecuteUbergraph_BasiliskAttackStateRangedPoison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasiliskAttackStateRangedPoison.BasiliskAttackStateRangedPoison_C.ExecuteUbergraph_BasiliskAttackStateRangedPoison");

	UBasiliskAttackStateRangedPoison_C_ExecuteUbergraph_BasiliskAttackStateRangedPoison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
