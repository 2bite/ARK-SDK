// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Door_Base_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Door_Base_SM.Door_Base_SM_C.UserConstructionScript
// ()

void ADoor_Base_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Base_SM.Door_Base_SM_C.UserConstructionScript");

	ADoor_Base_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Base_SM.Door_Base_SM_C.ExecuteUbergraph_Door_Base_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoor_Base_SM_C::ExecuteUbergraph_Door_Base_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Base_SM.Door_Base_SM_C.ExecuteUbergraph_Door_Base_SM");

	ADoor_Base_SM_C_ExecuteUbergraph_Door_Base_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
