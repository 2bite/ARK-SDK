// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Gorilla_Beta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Gorilla_Beta.PrimalItemTrophy_Gorilla_Beta_C.ExecuteUbergraph_PrimalItemTrophy_Gorilla_Beta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Gorilla_Beta_C::ExecuteUbergraph_PrimalItemTrophy_Gorilla_Beta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Gorilla_Beta.PrimalItemTrophy_Gorilla_Beta_C.ExecuteUbergraph_PrimalItemTrophy_Gorilla_Beta");

	UPrimalItemTrophy_Gorilla_Beta_C_ExecuteUbergraph_PrimalItemTrophy_Gorilla_Beta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif