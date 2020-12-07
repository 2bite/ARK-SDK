// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Campfire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Campfire.Campfire_C.UserConstructionScript
// ()

void ACampfire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Campfire.Campfire_C.UserConstructionScript");

	ACampfire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Campfire.Campfire_C.ExecuteUbergraph_Campfire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACampfire_C::ExecuteUbergraph_Campfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Campfire.Campfire_C.ExecuteUbergraph_Campfire");

	ACampfire_C_ExecuteUbergraph_Campfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
