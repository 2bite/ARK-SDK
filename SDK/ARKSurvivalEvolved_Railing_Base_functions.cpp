// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Railing_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Railing_Base.Railing_Base_C.UserConstructionScript
// ()

void ARailing_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Base.Railing_Base_C.UserConstructionScript");

	ARailing_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Railing_Base.Railing_Base_C.ExecuteUbergraph_Railing_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARailing_Base_C::ExecuteUbergraph_Railing_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Railing_Base.Railing_Base_C.ExecuteUbergraph_Railing_Base");

	ARailing_Base_C_ExecuteUbergraph_Railing_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
