// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_Shield_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Meteor_Shield_Base.Meteor_Shield_Base_C.UserConstructionScript
// ()

void AMeteor_Shield_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_Shield_Base.Meteor_Shield_Base_C.UserConstructionScript");

	AMeteor_Shield_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_Shield_Base.Meteor_Shield_Base_C.ExecuteUbergraph_Meteor_Shield_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeteor_Shield_Base_C::ExecuteUbergraph_Meteor_Shield_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_Shield_Base.Meteor_Shield_Base_C.ExecuteUbergraph_Meteor_Shield_Base");

	AMeteor_Shield_Base_C_ExecuteUbergraph_Meteor_Shield_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
