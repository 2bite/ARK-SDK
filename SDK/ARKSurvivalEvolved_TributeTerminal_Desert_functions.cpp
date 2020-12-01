// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Desert_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TributeTerminal_Desert.TributeTerminal_Desert_C.UserConstructionScript
// ()

void ATributeTerminal_Desert_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Desert.TributeTerminal_Desert_C.UserConstructionScript");

	ATributeTerminal_Desert_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TributeTerminal_Desert.TributeTerminal_Desert_C.ExecuteUbergraph_TributeTerminal_Desert
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATributeTerminal_Desert_C::ExecuteUbergraph_TributeTerminal_Desert(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Desert.TributeTerminal_Desert_C.ExecuteUbergraph_TributeTerminal_Desert");

	ATributeTerminal_Desert_C_ExecuteUbergraph_TributeTerminal_Desert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
