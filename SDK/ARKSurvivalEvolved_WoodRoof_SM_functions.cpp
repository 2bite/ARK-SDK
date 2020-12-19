// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodRoof_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodRoof_SM.WoodRoof_SM_C.UserConstructionScript
// ()

void AWoodRoof_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodRoof_SM.WoodRoof_SM_C.UserConstructionScript");

	AWoodRoof_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodRoof_SM.WoodRoof_SM_C.ExecuteUbergraph_WoodRoof_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodRoof_SM_C::ExecuteUbergraph_WoodRoof_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodRoof_SM.WoodRoof_SM_C.ExecuteUbergraph_WoodRoof_SM");

	AWoodRoof_SM_C_ExecuteUbergraph_WoodRoof_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
