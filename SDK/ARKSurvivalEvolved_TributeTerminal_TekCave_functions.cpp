// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_TekCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TributeTerminal_TekCave.TributeTerminal_TekCave_C.UserConstructionScript
// ()

void ATributeTerminal_TekCave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_TekCave.TributeTerminal_TekCave_C.UserConstructionScript");

	ATributeTerminal_TekCave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TributeTerminal_TekCave.TributeTerminal_TekCave_C.ExecuteUbergraph_TributeTerminal_TekCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATributeTerminal_TekCave_C::ExecuteUbergraph_TributeTerminal_TekCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_TekCave.TributeTerminal_TekCave_C.ExecuteUbergraph_TributeTerminal_TekCave");

	ATributeTerminal_TekCave_C_ExecuteUbergraph_TributeTerminal_TekCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
