// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Green_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TributeTerminal_Green.TributeTerminal_Green_C.UserConstructionScript
// ()

void ATributeTerminal_Green_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Green.TributeTerminal_Green_C.UserConstructionScript");

	ATributeTerminal_Green_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TributeTerminal_Green.TributeTerminal_Green_C.ExecuteUbergraph_TributeTerminal_Green
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATributeTerminal_Green_C::ExecuteUbergraph_TributeTerminal_Green(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Green.TributeTerminal_Green_C.ExecuteUbergraph_TributeTerminal_Green");

	ATributeTerminal_Green_C_ExecuteUbergraph_TributeTerminal_Green_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
