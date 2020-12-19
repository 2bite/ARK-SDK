// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Railing_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Railing_Stone.Railing_Stone_C.UserConstructionScript
// ()

void ARailing_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Stone.Railing_Stone_C.UserConstructionScript");

	ARailing_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Railing_Stone.Railing_Stone_C.ExecuteUbergraph_Railing_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARailing_Stone_C::ExecuteUbergraph_Railing_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Stone.Railing_Stone_C.ExecuteUbergraph_Railing_Stone");

	ARailing_Stone_C_ExecuteUbergraph_Railing_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
