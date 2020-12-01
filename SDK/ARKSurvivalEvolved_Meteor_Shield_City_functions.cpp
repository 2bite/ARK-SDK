// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_Shield_City_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Meteor_Shield_City.Meteor_Shield_City_C.UserConstructionScript
// ()

void AMeteor_Shield_City_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_Shield_City.Meteor_Shield_City_C.UserConstructionScript");

	AMeteor_Shield_City_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Meteor_Shield_City.Meteor_Shield_City_C.ExecuteUbergraph_Meteor_Shield_City
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMeteor_Shield_City_C::ExecuteUbergraph_Meteor_Shield_City(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Meteor_Shield_City.Meteor_Shield_City_C.ExecuteUbergraph_Meteor_Shield_City");

	AMeteor_Shield_City_C_ExecuteUbergraph_Meteor_Shield_City_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
