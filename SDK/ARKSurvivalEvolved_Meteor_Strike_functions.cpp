// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_Strike_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Meteor_Strike.Meteor_Strike_C.UserConstructionScript
// ()

void AMeteor_Strike_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_Strike.Meteor_Strike_C.UserConstructionScript");

	AMeteor_Strike_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_Strike.Meteor_Strike_C.ExecuteUbergraph_Meteor_Strike
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeteor_Strike_C::ExecuteUbergraph_Meteor_Strike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_Strike.Meteor_Strike_C.ExecuteUbergraph_Meteor_Strike");

	AMeteor_Strike_C_ExecuteUbergraph_Meteor_Strike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
