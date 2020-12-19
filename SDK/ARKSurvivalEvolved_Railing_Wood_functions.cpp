// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Railing_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Railing_Wood.Railing_Wood_C.UserConstructionScript
// ()

void ARailing_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Wood.Railing_Wood_C.UserConstructionScript");

	ARailing_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Railing_Wood.Railing_Wood_C.ExecuteUbergraph_Railing_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARailing_Wood_C::ExecuteUbergraph_Railing_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Wood.Railing_Wood_C.ExecuteUbergraph_Railing_Wood");

	ARailing_Wood_C_ExecuteUbergraph_Railing_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
