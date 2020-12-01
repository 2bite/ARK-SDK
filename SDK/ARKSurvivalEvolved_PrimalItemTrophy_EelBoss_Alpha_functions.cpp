// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_EelBoss_Alpha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_EelBoss_Alpha.PrimalItemTrophy_EelBoss_Alpha_C.ExecuteUbergraph_PrimalItemTrophy_EelBoss_Alpha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_EelBoss_Alpha_C::ExecuteUbergraph_PrimalItemTrophy_EelBoss_Alpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_EelBoss_Alpha.PrimalItemTrophy_EelBoss_Alpha_C.ExecuteUbergraph_PrimalItemTrophy_EelBoss_Alpha");

	UPrimalItemTrophy_EelBoss_Alpha_C_ExecuteUbergraph_PrimalItemTrophy_EelBoss_Alpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
