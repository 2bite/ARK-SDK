// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wall_Base_Small_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wall_Base_Small_SM.Wall_Base_Small_SM_C.UserConstructionScript
// ()

void AWall_Base_Small_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Base_Small_SM.Wall_Base_Small_SM_C.UserConstructionScript");

	AWall_Base_Small_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wall_Base_Small_SM.Wall_Base_Small_SM_C.ExecuteUbergraph_Wall_Base_Small_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWall_Base_Small_SM_C::ExecuteUbergraph_Wall_Base_Small_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wall_Base_Small_SM.Wall_Base_Small_SM_C.ExecuteUbergraph_Wall_Base_Small_SM");

	AWall_Base_Small_SM_C_ExecuteUbergraph_Wall_Base_Small_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
