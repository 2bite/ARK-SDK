// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Ramp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Base_Ramp.Base_Ramp_C.UserConstructionScript
// ()

void ABase_Ramp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Ramp.Base_Ramp_C.UserConstructionScript");

	ABase_Ramp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_Ramp.Base_Ramp_C.ExecuteUbergraph_Base_Ramp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABase_Ramp_C::ExecuteUbergraph_Base_Ramp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_Ramp.Base_Ramp_C.ExecuteUbergraph_Base_Ramp");

	ABase_Ramp_C_ExecuteUbergraph_Base_Ramp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
