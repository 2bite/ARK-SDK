// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_SotFUS_3rd_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_SotFUS_3rd.PrimalItemTrophy_SotFUS_3rd_C.ExecuteUbergraph_PrimalItemTrophy_SotFUS_3rd
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_SotFUS_3rd_C::ExecuteUbergraph_PrimalItemTrophy_SotFUS_3rd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_SotFUS_3rd.PrimalItemTrophy_SotFUS_3rd_C.ExecuteUbergraph_PrimalItemTrophy_SotFUS_3rd");

	UPrimalItemTrophy_SotFUS_3rd_C_ExecuteUbergraph_PrimalItemTrophy_SotFUS_3rd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
