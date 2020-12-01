// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsEndBoss_Tanks_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsEndBoss_Tanks.DinoAttackStateMinionsEndBoss_Tanks_C.ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsEndBoss_Tanks_C::ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsEndBoss_Tanks.DinoAttackStateMinionsEndBoss_Tanks_C.ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks");

	UDinoAttackStateMinionsEndBoss_Tanks_C_ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
