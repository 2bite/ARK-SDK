// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_EelBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_EelBoss.PrimalItemTrophy_EelBoss_C.ExecuteUbergraph_PrimalItemTrophy_EelBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_EelBoss_C::ExecuteUbergraph_PrimalItemTrophy_EelBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_EelBoss.PrimalItemTrophy_EelBoss_C.ExecuteUbergraph_PrimalItemTrophy_EelBoss");

	UPrimalItemTrophy_EelBoss_C_ExecuteUbergraph_PrimalItemTrophy_EelBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
