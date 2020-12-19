// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Flag_SM_Single_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Flag_SM_Single.Flag_SM_Single_C.UserConstructionScript
// ()

void AFlag_SM_Single_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM_Single.Flag_SM_Single_C.UserConstructionScript");

	AFlag_SM_Single_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Flag_SM_Single.Flag_SM_Single_C.ExecuteUbergraph_Flag_SM_Single
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFlag_SM_Single_C::ExecuteUbergraph_Flag_SM_Single(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Flag_SM_Single.Flag_SM_Single_C.ExecuteUbergraph_Flag_SM_Single");

	AFlag_SM_Single_C_ExecuteUbergraph_Flag_SM_Single_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
