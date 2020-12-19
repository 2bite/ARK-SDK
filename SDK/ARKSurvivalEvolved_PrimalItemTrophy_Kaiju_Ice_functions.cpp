// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Kaiju_Ice_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Kaiju_Ice.PrimalItemTrophy_Kaiju_Ice_C.ExecuteUbergraph_PrimalItemTrophy_Kaiju_Ice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Kaiju_Ice_C::ExecuteUbergraph_PrimalItemTrophy_Kaiju_Ice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Kaiju_Ice.PrimalItemTrophy_Kaiju_Ice_C.ExecuteUbergraph_PrimalItemTrophy_Kaiju_Ice");

	UPrimalItemTrophy_Kaiju_Ice_C_ExecuteUbergraph_PrimalItemTrophy_Kaiju_Ice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
