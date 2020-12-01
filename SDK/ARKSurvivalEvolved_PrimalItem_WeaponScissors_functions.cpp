// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponScissors_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_WeaponScissors.PrimalItem_WeaponScissors_C.ExecuteUbergraph_PrimalItem_WeaponScissors
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_WeaponScissors_C::ExecuteUbergraph_PrimalItem_WeaponScissors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_WeaponScissors.PrimalItem_WeaponScissors_C.ExecuteUbergraph_PrimalItem_WeaponScissors");

	UPrimalItem_WeaponScissors_C_ExecuteUbergraph_PrimalItem_WeaponScissors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
