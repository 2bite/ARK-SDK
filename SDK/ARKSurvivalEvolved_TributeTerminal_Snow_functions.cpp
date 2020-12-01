// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Snow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TributeTerminal_Snow.TributeTerminal_Snow_C.UserConstructionScript
// ()

void ATributeTerminal_Snow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Snow.TributeTerminal_Snow_C.UserConstructionScript");

	ATributeTerminal_Snow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TributeTerminal_Snow.TributeTerminal_Snow_C.ExecuteUbergraph_TributeTerminal_Snow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATributeTerminal_Snow_C::ExecuteUbergraph_TributeTerminal_Snow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Snow.TributeTerminal_Snow_C.ExecuteUbergraph_TributeTerminal_Snow");

	ATributeTerminal_Snow_C_ExecuteUbergraph_TributeTerminal_Snow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
