// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_MasterController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophy_MasterController.PrimalItemTrophy_MasterController_C.ExecuteUbergraph_PrimalItemTrophy_MasterController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophy_MasterController_C::ExecuteUbergraph_PrimalItemTrophy_MasterController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophy_MasterController.PrimalItemTrophy_MasterController_C.ExecuteUbergraph_PrimalItemTrophy_MasterController");

	UPrimalItemTrophy_MasterController_C_ExecuteUbergraph_PrimalItemTrophy_MasterController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
