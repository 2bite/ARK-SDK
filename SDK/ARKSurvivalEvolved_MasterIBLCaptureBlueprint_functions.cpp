// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MasterIBLCaptureBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MasterIBLCaptureBlueprint.MasterIBLCaptureBlueprint_C.UserConstructionScript
// ()

void AMasterIBLCaptureBlueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterIBLCaptureBlueprint.MasterIBLCaptureBlueprint_C.UserConstructionScript");

	AMasterIBLCaptureBlueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterIBLCaptureBlueprint.MasterIBLCaptureBlueprint_C.ExecuteUbergraph_MasterIBLCaptureBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMasterIBLCaptureBlueprint_C::ExecuteUbergraph_MasterIBLCaptureBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterIBLCaptureBlueprint.MasterIBLCaptureBlueprint_C.ExecuteUbergraph_MasterIBLCaptureBlueprint");

	AMasterIBLCaptureBlueprint_C_ExecuteUbergraph_MasterIBLCaptureBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
