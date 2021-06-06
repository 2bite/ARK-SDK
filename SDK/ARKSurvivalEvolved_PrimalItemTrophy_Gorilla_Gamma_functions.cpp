// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Gorilla_Gamma_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Gorilla_Gamma.PrimalItemTrophy_Gorilla_Gamma_C.ExecuteUbergraph_PrimalItemTrophy_Gorilla_Gamma
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Gorilla_Gamma_C::ExecuteUbergraph_PrimalItemTrophy_Gorilla_Gamma(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Gorilla_Gamma.PrimalItemTrophy_Gorilla_Gamma_C.ExecuteUbergraph_PrimalItemTrophy_Gorilla_Gamma");

	UPrimalItemTrophy_Gorilla_Gamma_C_ExecuteUbergraph_PrimalItemTrophy_Gorilla_Gamma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
