// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChildIBL_Capture_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChildIBL_Capture_Blueprint.ChildIBL_Capture_Blueprint_C.UserConstructionScript
// ()

void AChildIBL_Capture_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChildIBL_Capture_Blueprint.ChildIBL_Capture_Blueprint_C.UserConstructionScript");

	AChildIBL_Capture_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChildIBL_Capture_Blueprint.ChildIBL_Capture_Blueprint_C.ExecuteUbergraph_ChildIBL_Capture_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChildIBL_Capture_Blueprint_C::ExecuteUbergraph_ChildIBL_Capture_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChildIBL_Capture_Blueprint.ChildIBL_Capture_Blueprint_C.ExecuteUbergraph_ChildIBL_Capture_Blueprint");

	AChildIBL_Capture_Blueprint_C_ExecuteUbergraph_ChildIBL_Capture_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
