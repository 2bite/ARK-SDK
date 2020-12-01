// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponScoutRemote_CityTerminal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponScoutRemote_CityTerminal.PrimalItem_WeaponScoutRemote_CityTerminal_C.ExecuteUbergraph_PrimalItem_WeaponScoutRemote_CityTerminal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponScoutRemote_CityTerminal_C::ExecuteUbergraph_PrimalItem_WeaponScoutRemote_CityTerminal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScoutRemote_CityTerminal.PrimalItem_WeaponScoutRemote_CityTerminal_C.ExecuteUbergraph_PrimalItem_WeaponScoutRemote_CityTerminal");

	UPrimalItem_WeaponScoutRemote_CityTerminal_C_ExecuteUbergraph_PrimalItem_WeaponScoutRemote_CityTerminal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
