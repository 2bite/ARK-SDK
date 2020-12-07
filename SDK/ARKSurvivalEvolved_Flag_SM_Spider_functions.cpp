// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Flag_SM_Spider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Flag_SM_Spider.Flag_SM_Spider_C.UserConstructionScript
// ()

void AFlag_SM_Spider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM_Spider.Flag_SM_Spider_C.UserConstructionScript");

	AFlag_SM_Spider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flag_SM_Spider.Flag_SM_Spider_C.ExecuteUbergraph_Flag_SM_Spider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFlag_SM_Spider_C::ExecuteUbergraph_Flag_SM_Spider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM_Spider.Flag_SM_Spider_C.ExecuteUbergraph_Flag_SM_Spider");

	AFlag_SM_Spider_C_ExecuteUbergraph_Flag_SM_Spider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
