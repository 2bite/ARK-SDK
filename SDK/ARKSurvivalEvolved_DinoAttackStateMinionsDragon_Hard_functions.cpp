// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsDragon_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsDragon_Hard.DinoAttackStateMinionsDragon_Hard_C.ExecuteUbergraph_DinoAttackStateMinionsDragon_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsDragon_Hard_C::ExecuteUbergraph_DinoAttackStateMinionsDragon_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsDragon_Hard.DinoAttackStateMinionsDragon_Hard_C.ExecuteUbergraph_DinoAttackStateMinionsDragon_Hard");

	UDinoAttackStateMinionsDragon_Hard_C_ExecuteUbergraph_DinoAttackStateMinionsDragon_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
