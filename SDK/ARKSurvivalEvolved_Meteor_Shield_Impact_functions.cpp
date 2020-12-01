// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_Shield_Impact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Meteor_Shield_Impact.Meteor_Shield_Impact_C.UserConstructionScript
// ()

void AMeteor_Shield_Impact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_Shield_Impact.Meteor_Shield_Impact_C.UserConstructionScript");

	AMeteor_Shield_Impact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_Shield_Impact.Meteor_Shield_Impact_C.ExecuteUbergraph_Meteor_Shield_Impact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeteor_Shield_Impact_C::ExecuteUbergraph_Meteor_Shield_Impact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_Shield_Impact.Meteor_Shield_Impact_C.ExecuteUbergraph_Meteor_Shield_Impact");

	AMeteor_Shield_Impact_C_ExecuteUbergraph_Meteor_Shield_Impact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
