// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CustomIBL_Capture_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomIBL_Capture_Blueprint.CustomIBL_Capture_Blueprint_C.UserConstructionScript
// ()

void ACustomIBL_Capture_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomIBL_Capture_Blueprint.CustomIBL_Capture_Blueprint_C.UserConstructionScript");

	ACustomIBL_Capture_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomIBL_Capture_Blueprint.CustomIBL_Capture_Blueprint_C.ExecuteUbergraph_CustomIBL_Capture_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACustomIBL_Capture_Blueprint_C::ExecuteUbergraph_CustomIBL_Capture_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomIBL_Capture_Blueprint.CustomIBL_Capture_Blueprint_C.ExecuteUbergraph_CustomIBL_Capture_Blueprint");

	ACustomIBL_Capture_Blueprint_C_ExecuteUbergraph_CustomIBL_Capture_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
