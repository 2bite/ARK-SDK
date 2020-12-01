// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_AlphaWorm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_AlphaWorm.PrimalItemTrophy_AlphaWorm_C.ExecuteUbergraph_PrimalItemTrophy_AlphaWorm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_AlphaWorm_C::ExecuteUbergraph_PrimalItemTrophy_AlphaWorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_AlphaWorm.PrimalItemTrophy_AlphaWorm_C.ExecuteUbergraph_PrimalItemTrophy_AlphaWorm");

	UPrimalItemTrophy_AlphaWorm_C_ExecuteUbergraph_PrimalItemTrophy_AlphaWorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
