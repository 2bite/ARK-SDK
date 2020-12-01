// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_SotF_2nd_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_SotF_2nd.PrimalItemTrophy_SotF_2nd_C.ExecuteUbergraph_PrimalItemTrophy_SotF_2nd
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_SotF_2nd_C::ExecuteUbergraph_PrimalItemTrophy_SotF_2nd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_SotF_2nd.PrimalItemTrophy_SotF_2nd_C.ExecuteUbergraph_PrimalItemTrophy_SotF_2nd");

	UPrimalItemTrophy_SotF_2nd_C_ExecuteUbergraph_PrimalItemTrophy_SotF_2nd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
