// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsEndBoss_Tanks_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsEndBoss_Tanks_Hard.DinoAttackStateMinionsEndBoss_Tanks_Hard_C.ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsEndBoss_Tanks_Hard_C::ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsEndBoss_Tanks_Hard.DinoAttackStateMinionsEndBoss_Tanks_Hard_C.ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Hard");

	UDinoAttackStateMinionsEndBoss_Tanks_Hard_C_ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
