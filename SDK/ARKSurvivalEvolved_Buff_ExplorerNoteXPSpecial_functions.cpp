// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExplorerNoteXPSpecial_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ExplorerNoteXPSpecial.Buff_ExplorerNoteXPSpecial_C.UserConstructionScript
// ()

void ABuff_ExplorerNoteXPSpecial_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteXPSpecial.Buff_ExplorerNoteXPSpecial_C.UserConstructionScript");

	ABuff_ExplorerNoteXPSpecial_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ExplorerNoteXPSpecial.Buff_ExplorerNoteXPSpecial_C.ExecuteUbergraph_Buff_ExplorerNoteXPSpecial
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ExplorerNoteXPSpecial_C::ExecuteUbergraph_Buff_ExplorerNoteXPSpecial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ExplorerNoteXPSpecial.Buff_ExplorerNoteXPSpecial_C.ExecuteUbergraph_Buff_ExplorerNoteXPSpecial");

	ABuff_ExplorerNoteXPSpecial_C_ExecuteUbergraph_Buff_ExplorerNoteXPSpecial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
