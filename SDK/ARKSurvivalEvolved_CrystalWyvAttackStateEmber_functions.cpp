// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalWyvAttackStateEmber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalWyvAttackStateEmber.CrystalWyvAttackStateEmber_C.ExecuteUbergraph_CrystalWyvAttackStateEmber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCrystalWyvAttackStateEmber_C::ExecuteUbergraph_CrystalWyvAttackStateEmber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalWyvAttackStateEmber.CrystalWyvAttackStateEmber_C.ExecuteUbergraph_CrystalWyvAttackStateEmber");

	UCrystalWyvAttackStateEmber_C_ExecuteUbergraph_CrystalWyvAttackStateEmber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
