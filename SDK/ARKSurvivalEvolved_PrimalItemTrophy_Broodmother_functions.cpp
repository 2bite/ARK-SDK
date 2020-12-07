// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Broodmother_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Broodmother.PrimalItemTrophy_Broodmother_C.ExecuteUbergraph_PrimalItemTrophy_Broodmother
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Broodmother_C::ExecuteUbergraph_PrimalItemTrophy_Broodmother(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Broodmother.PrimalItemTrophy_Broodmother_C.ExecuteUbergraph_PrimalItemTrophy_Broodmother");

	UPrimalItemTrophy_Broodmother_C_ExecuteUbergraph_PrimalItemTrophy_Broodmother_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
