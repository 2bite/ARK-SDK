// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Manticore_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Manticore.PrimalItemTrophy_Manticore_C.ExecuteUbergraph_PrimalItemTrophy_Manticore
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Manticore_C::ExecuteUbergraph_PrimalItemTrophy_Manticore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Manticore.PrimalItemTrophy_Manticore_C.ExecuteUbergraph_PrimalItemTrophy_Manticore");

	UPrimalItemTrophy_Manticore_C_ExecuteUbergraph_PrimalItemTrophy_Manticore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
