// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsDragon_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsDragon_Med.DinoAttackStateMinionsDragon_Med_C.ExecuteUbergraph_DinoAttackStateMinionsDragon_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsDragon_Med_C::ExecuteUbergraph_DinoAttackStateMinionsDragon_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon_Med.DinoAttackStateMinionsDragon_Med_C.ExecuteUbergraph_DinoAttackStateMinionsDragon_Med");

	UDinoAttackStateMinionsDragon_Med_C_ExecuteUbergraph_DinoAttackStateMinionsDragon_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
