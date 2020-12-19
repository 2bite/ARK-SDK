// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TreePlatform_Wood_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TreePlatform_Wood_SM.TreePlatform_Wood_SM_C.UserConstructionScript
// ()

void ATreePlatform_Wood_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TreePlatform_Wood_SM.TreePlatform_Wood_SM_C.UserConstructionScript");

	ATreePlatform_Wood_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TreePlatform_Wood_SM.TreePlatform_Wood_SM_C.ExecuteUbergraph_TreePlatform_Wood_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATreePlatform_Wood_SM_C::ExecuteUbergraph_TreePlatform_Wood_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TreePlatform_Wood_SM.TreePlatform_Wood_SM_C.ExecuteUbergraph_TreePlatform_Wood_SM");

	ATreePlatform_Wood_SM_C_ExecuteUbergraph_TreePlatform_Wood_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
