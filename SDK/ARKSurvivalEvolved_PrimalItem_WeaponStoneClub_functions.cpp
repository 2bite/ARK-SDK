// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponStoneClub_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponStoneClub.PrimalItem_WeaponStoneClub_C.ExecuteUbergraph_PrimalItem_WeaponStoneClub
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponStoneClub_C::ExecuteUbergraph_PrimalItem_WeaponStoneClub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponStoneClub.PrimalItem_WeaponStoneClub_C.ExecuteUbergraph_PrimalItem_WeaponStoneClub");

	UPrimalItem_WeaponStoneClub_C_ExecuteUbergraph_PrimalItem_WeaponStoneClub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
