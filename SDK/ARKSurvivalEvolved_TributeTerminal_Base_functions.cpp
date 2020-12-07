// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TributeTerminal_Base.TributeTerminal_Base_C.UserConstructionScript
// ()

void ATributeTerminal_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Base.TributeTerminal_Base_C.UserConstructionScript");

	ATributeTerminal_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TributeTerminal_Base.TributeTerminal_Base_C.ExecuteUbergraph_TributeTerminal_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATributeTerminal_Base_C::ExecuteUbergraph_TributeTerminal_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Base.TributeTerminal_Base_C.ExecuteUbergraph_TributeTerminal_Base");

	ATributeTerminal_Base_C_ExecuteUbergraph_TributeTerminal_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
