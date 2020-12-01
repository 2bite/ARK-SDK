// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TributeTerminal_Red_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TributeTerminal_Red.TributeTerminal_Red_C.UserConstructionScript
// ()

void ATributeTerminal_Red_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Red.TributeTerminal_Red_C.UserConstructionScript");

	ATributeTerminal_Red_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TributeTerminal_Red.TributeTerminal_Red_C.ExecuteUbergraph_TributeTerminal_Red
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATributeTerminal_Red_C::ExecuteUbergraph_TributeTerminal_Red(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TributeTerminal_Red.TributeTerminal_Red_C.ExecuteUbergraph_TributeTerminal_Red");

	ATributeTerminal_Red_C_ExecuteUbergraph_TributeTerminal_Red_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
