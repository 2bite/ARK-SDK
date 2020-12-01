// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Dragon_Alpha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_Dragon_Alpha.PrimalItemTrophy_Dragon_Alpha_C.ExecuteUbergraph_PrimalItemTrophy_Dragon_Alpha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_Dragon_Alpha_C::ExecuteUbergraph_PrimalItemTrophy_Dragon_Alpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_Dragon_Alpha.PrimalItemTrophy_Dragon_Alpha_C.ExecuteUbergraph_PrimalItemTrophy_Dragon_Alpha");

	UPrimalItemTrophy_Dragon_Alpha_C_ExecuteUbergraph_PrimalItemTrophy_Dragon_Alpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
