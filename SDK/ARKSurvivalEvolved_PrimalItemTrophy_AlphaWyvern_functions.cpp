// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_AlphaWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_AlphaWyvern.PrimalItemTrophy_AlphaWyvern_C.ExecuteUbergraph_PrimalItemTrophy_AlphaWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_AlphaWyvern_C::ExecuteUbergraph_PrimalItemTrophy_AlphaWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_AlphaWyvern.PrimalItemTrophy_AlphaWyvern_C.ExecuteUbergraph_PrimalItemTrophy_AlphaWyvern");

	UPrimalItemTrophy_AlphaWyvern_C_ExecuteUbergraph_PrimalItemTrophy_AlphaWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
