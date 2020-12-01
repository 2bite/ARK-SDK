// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Forest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TributeTerminal_Forest.TributeTerminal_Forest_C.UserConstructionScript
// ()

void ATributeTerminal_Forest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Forest.TributeTerminal_Forest_C.UserConstructionScript");

	ATributeTerminal_Forest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TributeTerminal_Forest.TributeTerminal_Forest_C.ExecuteUbergraph_TributeTerminal_Forest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATributeTerminal_Forest_C::ExecuteUbergraph_TributeTerminal_Forest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Forest.TributeTerminal_Forest_C.ExecuteUbergraph_TributeTerminal_Forest");

	ATributeTerminal_Forest_C_ExecuteUbergraph_TributeTerminal_Forest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
