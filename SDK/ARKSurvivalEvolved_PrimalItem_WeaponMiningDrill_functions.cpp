// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponMiningDrill_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponMiningDrill.PrimalItem_WeaponMiningDrill_C.ExecuteUbergraph_PrimalItem_WeaponMiningDrill
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponMiningDrill_C::ExecuteUbergraph_PrimalItem_WeaponMiningDrill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponMiningDrill.PrimalItem_WeaponMiningDrill_C.ExecuteUbergraph_PrimalItem_WeaponMiningDrill");

	UPrimalItem_WeaponMiningDrill_C_ExecuteUbergraph_PrimalItem_WeaponMiningDrill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
