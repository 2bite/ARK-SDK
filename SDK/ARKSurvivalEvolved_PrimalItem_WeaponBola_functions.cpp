// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponBola_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponBola.PrimalItem_WeaponBola_C.ExecuteUbergraph_PrimalItem_WeaponBola
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponBola_C::ExecuteUbergraph_PrimalItem_WeaponBola(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponBola.PrimalItem_WeaponBola_C.ExecuteUbergraph_PrimalItem_WeaponBola");

	UPrimalItem_WeaponBola_C_ExecuteUbergraph_PrimalItem_WeaponBola_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
