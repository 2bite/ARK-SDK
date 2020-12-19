// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Dragon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Dragon.PrimalItemTrophy_Dragon_C.ExecuteUbergraph_PrimalItemTrophy_Dragon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Dragon_C::ExecuteUbergraph_PrimalItemTrophy_Dragon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Dragon.PrimalItemTrophy_Dragon_C.ExecuteUbergraph_PrimalItemTrophy_Dragon");

	UPrimalItemTrophy_Dragon_C_ExecuteUbergraph_PrimalItemTrophy_Dragon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
