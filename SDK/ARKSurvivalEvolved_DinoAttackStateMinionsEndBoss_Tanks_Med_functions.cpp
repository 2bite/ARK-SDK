// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsEndBoss_Tanks_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsEndBoss_Tanks_Med.DinoAttackStateMinionsEndBoss_Tanks_Med_C.ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsEndBoss_Tanks_Med_C::ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsEndBoss_Tanks_Med.DinoAttackStateMinionsEndBoss_Tanks_Med_C.ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Med");

	UDinoAttackStateMinionsEndBoss_Tanks_Med_C_ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Tanks_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
