// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gate_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gate_Tek.Gate_Tek_C.UserConstructionScript
// ()

void AGate_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Tek.Gate_Tek_C.UserConstructionScript");

	AGate_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gate_Tek.Gate_Tek_C.ExecuteUbergraph_Gate_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGate_Tek_C::ExecuteUbergraph_Gate_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gate_Tek.Gate_Tek_C.ExecuteUbergraph_Gate_Tek");

	AGate_Tek_C_ExecuteUbergraph_Gate_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
