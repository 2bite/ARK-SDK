// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Kaiju_King_Beta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Kaiju_King_Beta.PrimalItemTrophy_Kaiju_King_Beta_C.ExecuteUbergraph_PrimalItemTrophy_Kaiju_King_Beta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Kaiju_King_Beta_C::ExecuteUbergraph_PrimalItemTrophy_Kaiju_King_Beta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Kaiju_King_Beta.PrimalItemTrophy_Kaiju_King_Beta_C.ExecuteUbergraph_PrimalItemTrophy_Kaiju_King_Beta");

	UPrimalItemTrophy_Kaiju_King_Beta_C_ExecuteUbergraph_PrimalItemTrophy_Kaiju_King_Beta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
