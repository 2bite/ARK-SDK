// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_SotF_1st_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_SotF_1st.PrimalItemTrophy_SotF_1st_C.ExecuteUbergraph_PrimalItemTrophy_SotF_1st
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_SotF_1st_C::ExecuteUbergraph_PrimalItemTrophy_SotF_1st(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_SotF_1st.PrimalItemTrophy_SotF_1st_C.ExecuteUbergraph_PrimalItemTrophy_SotF_1st");

	UPrimalItemTrophy_SotF_1st_C_ExecuteUbergraph_PrimalItemTrophy_SotF_1st_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
