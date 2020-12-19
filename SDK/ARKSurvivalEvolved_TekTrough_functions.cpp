// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekTrough_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekTrough.TekTrough_C.UserConstructionScript
// ()

void ATekTrough_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTrough.TekTrough_C.UserConstructionScript");

	ATekTrough_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekTrough.TekTrough_C.ExecuteUbergraph_TekTrough
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekTrough_C::ExecuteUbergraph_TekTrough(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekTrough.TekTrough_C.ExecuteUbergraph_TekTrough");

	ATekTrough_C_ExecuteUbergraph_TekTrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
