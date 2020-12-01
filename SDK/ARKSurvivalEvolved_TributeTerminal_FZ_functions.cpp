// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_FZ_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TributeTerminal_FZ.TributeTerminal_FZ_C.UserConstructionScript
// ()

void ATributeTerminal_FZ_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_FZ.TributeTerminal_FZ_C.UserConstructionScript");

	ATributeTerminal_FZ_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TributeTerminal_FZ.TributeTerminal_FZ_C.ExecuteUbergraph_TributeTerminal_FZ
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATributeTerminal_FZ_C::ExecuteUbergraph_TributeTerminal_FZ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_FZ.TributeTerminal_FZ_C.ExecuteUbergraph_TributeTerminal_FZ");

	ATributeTerminal_FZ_C_ExecuteUbergraph_TributeTerminal_FZ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
