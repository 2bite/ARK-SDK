// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_SotFUS_1st_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_SotFUS_1st.PrimalItemTrophy_SotFUS_1st_C.ExecuteUbergraph_PrimalItemTrophy_SotFUS_1st
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_SotFUS_1st_C::ExecuteUbergraph_PrimalItemTrophy_SotFUS_1st(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_SotFUS_1st.PrimalItemTrophy_SotFUS_1st_C.ExecuteUbergraph_PrimalItemTrophy_SotFUS_1st");

	UPrimalItemTrophy_SotFUS_1st_C_ExecuteUbergraph_PrimalItemTrophy_SotFUS_1st_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
