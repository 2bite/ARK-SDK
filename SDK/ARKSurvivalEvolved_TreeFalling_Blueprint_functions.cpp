// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TreeFalling_Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TreeFalling_Blueprint.TreeFalling_Blueprint_C.UserConstructionScript
// ()

void ATreeFalling_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TreeFalling_Blueprint.TreeFalling_Blueprint_C.UserConstructionScript");

	ATreeFalling_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TreeFalling_Blueprint.TreeFalling_Blueprint_C.ExecuteUbergraph_TreeFalling_Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATreeFalling_Blueprint_C::ExecuteUbergraph_TreeFalling_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TreeFalling_Blueprint.TreeFalling_Blueprint_C.ExecuteUbergraph_TreeFalling_Blueprint");

	ATreeFalling_Blueprint_C_ExecuteUbergraph_TreeFalling_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
