// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Railing_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Railing_Tek.Railing_Tek_C.UserConstructionScript
// ()

void ARailing_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Tek.Railing_Tek_C.UserConstructionScript");

	ARailing_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Railing_Tek.Railing_Tek_C.ExecuteUbergraph_Railing_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARailing_Tek_C::ExecuteUbergraph_Railing_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Tek.Railing_Tek_C.ExecuteUbergraph_Railing_Tek");

	ARailing_Tek_C_ExecuteUbergraph_Railing_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
