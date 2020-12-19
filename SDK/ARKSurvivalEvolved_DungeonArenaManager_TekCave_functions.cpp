// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DungeonArenaManager_TekCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DungeonArenaManager_TekCave.DungeonArenaManager_TekCave_C.UserConstructionScript
// ()

void ADungeonArenaManager_TekCave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager_TekCave.DungeonArenaManager_TekCave_C.UserConstructionScript");

	ADungeonArenaManager_TekCave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DungeonArenaManager_TekCave.DungeonArenaManager_TekCave_C.ExecuteUbergraph_DungeonArenaManager_TekCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADungeonArenaManager_TekCave_C::ExecuteUbergraph_DungeonArenaManager_TekCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DungeonArenaManager_TekCave.DungeonArenaManager_TekCave_C.ExecuteUbergraph_DungeonArenaManager_TekCave");

	ADungeonArenaManager_TekCave_C_ExecuteUbergraph_DungeonArenaManager_TekCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
