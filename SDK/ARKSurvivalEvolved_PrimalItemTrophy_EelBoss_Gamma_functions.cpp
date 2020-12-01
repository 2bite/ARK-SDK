// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_EelBoss_Gamma_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_EelBoss_Gamma.PrimalItemTrophy_EelBoss_Gamma_C.ExecuteUbergraph_PrimalItemTrophy_EelBoss_Gamma
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_EelBoss_Gamma_C::ExecuteUbergraph_PrimalItemTrophy_EelBoss_Gamma(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_EelBoss_Gamma.PrimalItemTrophy_EelBoss_Gamma_C.ExecuteUbergraph_PrimalItemTrophy_EelBoss_Gamma");

	UPrimalItemTrophy_EelBoss_Gamma_C_ExecuteUbergraph_PrimalItemTrophy_EelBoss_Gamma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
