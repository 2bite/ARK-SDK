// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_DinoDossiers_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplorerChest_DinoDossiers.ExplorerChest_DinoDossiers_C.UserConstructionScript
// ()

void AExplorerChest_DinoDossiers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_DinoDossiers.ExplorerChest_DinoDossiers_C.UserConstructionScript");

	AExplorerChest_DinoDossiers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_DinoDossiers.ExplorerChest_DinoDossiers_C.ExecuteUbergraph_ExplorerChest_DinoDossiers
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_DinoDossiers_C::ExecuteUbergraph_ExplorerChest_DinoDossiers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_DinoDossiers.ExplorerChest_DinoDossiers_C.ExecuteUbergraph_ExplorerChest_DinoDossiers");

	AExplorerChest_DinoDossiers_C_ExecuteUbergraph_ExplorerChest_DinoDossiers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
