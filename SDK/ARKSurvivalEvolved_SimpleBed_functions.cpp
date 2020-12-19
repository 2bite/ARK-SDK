// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SimpleBed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SimpleBed.SimpleBed_C.UserConstructionScript
// ()

void ASimpleBed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleBed.SimpleBed_C.UserConstructionScript");

	ASimpleBed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleBed.SimpleBed_C.ExecuteUbergraph_SimpleBed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASimpleBed_C::ExecuteUbergraph_SimpleBed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleBed.SimpleBed_C.ExecuteUbergraph_SimpleBed");

	ASimpleBed_C_ExecuteUbergraph_SimpleBed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
