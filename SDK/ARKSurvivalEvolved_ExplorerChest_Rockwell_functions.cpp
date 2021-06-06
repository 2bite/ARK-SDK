// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Rockwell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplorerChest_Rockwell.ExplorerChest_Rockwell_C.UserConstructionScript
// ()

void AExplorerChest_Rockwell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Rockwell.ExplorerChest_Rockwell_C.UserConstructionScript");

	AExplorerChest_Rockwell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Rockwell.ExplorerChest_Rockwell_C.ExecuteUbergraph_ExplorerChest_Rockwell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Rockwell_C::ExecuteUbergraph_ExplorerChest_Rockwell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Rockwell.ExplorerChest_Rockwell_C.ExecuteUbergraph_ExplorerChest_Rockwell");

	AExplorerChest_Rockwell_C_ExecuteUbergraph_ExplorerChest_Rockwell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
