// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_SheWhoWaits_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplorerChest_SheWhoWaits.ExplorerChest_SheWhoWaits_C.UserConstructionScript
// ()

void AExplorerChest_SheWhoWaits_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_SheWhoWaits.ExplorerChest_SheWhoWaits_C.UserConstructionScript");

	AExplorerChest_SheWhoWaits_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_SheWhoWaits.ExplorerChest_SheWhoWaits_C.ExecuteUbergraph_ExplorerChest_SheWhoWaits
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_SheWhoWaits_C::ExecuteUbergraph_ExplorerChest_SheWhoWaits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_SheWhoWaits.ExplorerChest_SheWhoWaits_C.ExecuteUbergraph_ExplorerChest_SheWhoWaits");

	AExplorerChest_SheWhoWaits_C_ExecuteUbergraph_ExplorerChest_SheWhoWaits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
