// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Blue_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TributeTerminal_Blue.TributeTerminal_Blue_C.UserConstructionScript
// ()

void ATributeTerminal_Blue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Blue.TributeTerminal_Blue_C.UserConstructionScript");

	ATributeTerminal_Blue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TributeTerminal_Blue.TributeTerminal_Blue_C.ExecuteUbergraph_TributeTerminal_Blue
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATributeTerminal_Blue_C::ExecuteUbergraph_TributeTerminal_Blue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Blue.TributeTerminal_Blue_C.ExecuteUbergraph_TributeTerminal_Blue");

	ATributeTerminal_Blue_C_ExecuteUbergraph_TributeTerminal_Blue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
