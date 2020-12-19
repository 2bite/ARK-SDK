// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_ARKLogo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_ARKLogo.PrimalItemTrophy_ARKLogo_C.ExecuteUbergraph_PrimalItemTrophy_ARKLogo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_ARKLogo_C::ExecuteUbergraph_PrimalItemTrophy_ARKLogo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_ARKLogo.PrimalItemTrophy_ARKLogo_C.ExecuteUbergraph_PrimalItemTrophy_ARKLogo");

	UPrimalItemTrophy_ARKLogo_C_ExecuteUbergraph_PrimalItemTrophy_ARKLogo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
