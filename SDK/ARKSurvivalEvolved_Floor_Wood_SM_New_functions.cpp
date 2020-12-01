// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Floor_Wood_SM_New_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Floor_Wood_SM_New.Floor_Wood_SM_New_C.UserConstructionScript
// ()

void AFloor_Wood_SM_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Wood_SM_New.Floor_Wood_SM_New_C.UserConstructionScript");

	AFloor_Wood_SM_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Floor_Wood_SM_New.Floor_Wood_SM_New_C.ExecuteUbergraph_Floor_Wood_SM_New
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFloor_Wood_SM_New_C::ExecuteUbergraph_Floor_Wood_SM_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Wood_SM_New.Floor_Wood_SM_New_C.ExecuteUbergraph_Floor_Wood_SM_New");

	AFloor_Wood_SM_New_C_ExecuteUbergraph_Floor_Wood_SM_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
