// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsEndBoss_Drones_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsEndBoss_Drones_Med.DinoAttackStateMinionsEndBoss_Drones_Med_C.ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Drones_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsEndBoss_Drones_Med_C::ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Drones_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsEndBoss_Drones_Med.DinoAttackStateMinionsEndBoss_Drones_Med_C.ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Drones_Med");

	UDinoAttackStateMinionsEndBoss_Drones_Med_C_ExecuteUbergraph_DinoAttackStateMinionsEndBoss_Drones_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
