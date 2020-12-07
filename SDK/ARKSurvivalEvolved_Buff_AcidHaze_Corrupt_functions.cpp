// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AcidHaze_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AcidHaze_Corrupt.Buff_AcidHaze_Corrupt_C.UserConstructionScript
// ()

void ABuff_AcidHaze_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AcidHaze_Corrupt.Buff_AcidHaze_Corrupt_C.UserConstructionScript");

	ABuff_AcidHaze_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AcidHaze_Corrupt.Buff_AcidHaze_Corrupt_C.ExecuteUbergraph_Buff_AcidHaze_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AcidHaze_Corrupt_C::ExecuteUbergraph_Buff_AcidHaze_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AcidHaze_Corrupt.Buff_AcidHaze_Corrupt_C.ExecuteUbergraph_Buff_AcidHaze_Corrupt");

	ABuff_AcidHaze_Corrupt_C_ExecuteUbergraph_Buff_AcidHaze_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
