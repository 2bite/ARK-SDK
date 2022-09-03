// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvAttackStateWater_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvAttackStateWater.CrystalWyvAttackStateWater_C.ExecuteUbergraph_CrystalWyvAttackStateWater
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCrystalWyvAttackStateWater_C::ExecuteUbergraph_CrystalWyvAttackStateWater(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvAttackStateWater.CrystalWyvAttackStateWater_C.ExecuteUbergraph_CrystalWyvAttackStateWater");

	UCrystalWyvAttackStateWater_C_ExecuteUbergraph_CrystalWyvAttackStateWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
