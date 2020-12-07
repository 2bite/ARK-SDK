// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Santiago_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplorerChest_Santiago.ExplorerChest_Santiago_C.UserConstructionScript
// ()

void AExplorerChest_Santiago_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Santiago.ExplorerChest_Santiago_C.UserConstructionScript");

	AExplorerChest_Santiago_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Santiago.ExplorerChest_Santiago_C.ExecuteUbergraph_ExplorerChest_Santiago
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Santiago_C::ExecuteUbergraph_ExplorerChest_Santiago(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Santiago.ExplorerChest_Santiago_C.ExecuteUbergraph_ExplorerChest_Santiago");

	AExplorerChest_Santiago_C_ExecuteUbergraph_ExplorerChest_Santiago_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
