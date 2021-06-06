// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_JungleAmbientSound_Blueprint_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JungleAmbientSound_Blueprint_Small.JungleAmbientSound_Blueprint_Small_C.UserConstructionScript
// ()

void AJungleAmbientSound_Blueprint_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function JungleAmbientSound_Blueprint_Small.JungleAmbientSound_Blueprint_Small_C.UserConstructionScript");

	AJungleAmbientSound_Blueprint_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JungleAmbientSound_Blueprint_Small.JungleAmbientSound_Blueprint_Small_C.ExecuteUbergraph_JungleAmbientSound_Blueprint_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AJungleAmbientSound_Blueprint_Small_C::ExecuteUbergraph_JungleAmbientSound_Blueprint_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JungleAmbientSound_Blueprint_Small.JungleAmbientSound_Blueprint_Small_C.ExecuteUbergraph_JungleAmbientSound_Blueprint_Small");

	AJungleAmbientSound_Blueprint_Small_C_ExecuteUbergraph_JungleAmbientSound_Blueprint_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
