// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Dianna_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplorerChest_Dianna.ExplorerChest_Dianna_C.UserConstructionScript
// ()

void AExplorerChest_Dianna_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Dianna.ExplorerChest_Dianna_C.UserConstructionScript");

	AExplorerChest_Dianna_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplorerChest_Dianna.ExplorerChest_Dianna_C.ExecuteUbergraph_ExplorerChest_Dianna
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplorerChest_Dianna_C::ExecuteUbergraph_ExplorerChest_Dianna(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplorerChest_Dianna.ExplorerChest_Dianna_C.ExecuteUbergraph_ExplorerChest_Dianna");

	AExplorerChest_Dianna_C_ExecuteUbergraph_ExplorerChest_Dianna_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
