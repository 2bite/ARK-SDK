// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Kaiju_Desert_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Kaiju_Desert.PrimalItemTrophy_Kaiju_Desert_C.ExecuteUbergraph_PrimalItemTrophy_Kaiju_Desert
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Kaiju_Desert_C::ExecuteUbergraph_PrimalItemTrophy_Kaiju_Desert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Kaiju_Desert.PrimalItemTrophy_Kaiju_Desert_C.ExecuteUbergraph_PrimalItemTrophy_Kaiju_Desert");

	UPrimalItemTrophy_Kaiju_Desert_C_ExecuteUbergraph_PrimalItemTrophy_Kaiju_Desert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
