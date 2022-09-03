// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_AlphaRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_AlphaRex.PrimalItemTrophy_AlphaRex_C.ExecuteUbergraph_PrimalItemTrophy_AlphaRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_AlphaRex_C::ExecuteUbergraph_PrimalItemTrophy_AlphaRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_AlphaRex.PrimalItemTrophy_AlphaRex_C.ExecuteUbergraph_PrimalItemTrophy_AlphaRex");

	UPrimalItemTrophy_AlphaRex_C_ExecuteUbergraph_PrimalItemTrophy_AlphaRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
