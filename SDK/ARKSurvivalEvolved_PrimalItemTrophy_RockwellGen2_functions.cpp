// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_RockwellGen2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_RockwellGen2.PrimalItemTrophy_RockwellGen2_C.ExecuteUbergraph_PrimalItemTrophy_RockwellGen2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_RockwellGen2_C::ExecuteUbergraph_PrimalItemTrophy_RockwellGen2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_RockwellGen2.PrimalItemTrophy_RockwellGen2_C.ExecuteUbergraph_PrimalItemTrophy_RockwellGen2");

	UPrimalItemTrophy_RockwellGen2_C_ExecuteUbergraph_PrimalItemTrophy_RockwellGen2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
