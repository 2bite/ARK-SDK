// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvAttackStateBlood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvAttackStateBlood.CrystalWyvAttackStateBlood_C.ExecuteUbergraph_CrystalWyvAttackStateBlood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCrystalWyvAttackStateBlood_C::ExecuteUbergraph_CrystalWyvAttackStateBlood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvAttackStateBlood.CrystalWyvAttackStateBlood_C.ExecuteUbergraph_CrystalWyvAttackStateBlood");

	UCrystalWyvAttackStateBlood_C_ExecuteUbergraph_CrystalWyvAttackStateBlood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
