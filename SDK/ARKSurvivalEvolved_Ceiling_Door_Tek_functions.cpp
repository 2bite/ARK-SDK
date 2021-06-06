// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ceiling_Door_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ceiling_Door_Tek.Ceiling_Door_Tek_C.UserConstructionScript
// ()

void ACeiling_Door_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Door_Tek.Ceiling_Door_Tek_C.UserConstructionScript");

	ACeiling_Door_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ceiling_Door_Tek.Ceiling_Door_Tek_C.ExecuteUbergraph_Ceiling_Door_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACeiling_Door_Tek_C::ExecuteUbergraph_Ceiling_Door_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ceiling_Door_Tek.Ceiling_Door_Tek_C.ExecuteUbergraph_Ceiling_Door_Tek");

	ACeiling_Door_Tek_C_ExecuteUbergraph_Ceiling_Door_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
