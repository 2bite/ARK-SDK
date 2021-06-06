// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Doorway_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ceiling_Doorway_Metal.Ceiling_Doorway_Metal_C.UserConstructionScript
// ()

void ACeiling_Doorway_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Metal.Ceiling_Doorway_Metal_C.UserConstructionScript");

	ACeiling_Doorway_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ceiling_Doorway_Metal.Ceiling_Doorway_Metal_C.ExecuteUbergraph_Ceiling_Doorway_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACeiling_Doorway_Metal_C::ExecuteUbergraph_Ceiling_Doorway_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Doorway_Metal.Ceiling_Doorway_Metal_C.ExecuteUbergraph_Ceiling_Doorway_Metal");

	ACeiling_Doorway_Metal_C_ExecuteUbergraph_Ceiling_Doorway_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
