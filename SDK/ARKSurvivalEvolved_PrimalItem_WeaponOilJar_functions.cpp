// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponOilJar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponOilJar.PrimalItem_WeaponOilJar_C.ExecuteUbergraph_PrimalItem_WeaponOilJar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponOilJar_C::ExecuteUbergraph_PrimalItem_WeaponOilJar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponOilJar.PrimalItem_WeaponOilJar_C.ExecuteUbergraph_PrimalItem_WeaponOilJar");

	UPrimalItem_WeaponOilJar_C_ExecuteUbergraph_PrimalItem_WeaponOilJar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
