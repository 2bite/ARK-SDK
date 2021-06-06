// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Diplodocus_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Diplodocus_Character_BP.Diplodocus_Character_BP_C.AllowWakingTame
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADiplodocus_Character_BP_C::AllowWakingTame(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplodocus_Character_BP.Diplodocus_Character_BP_C.AllowWakingTame");

	ADiplodocus_Character_BP_C_AllowWakingTame_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Diplodocus_Character_BP.Diplodocus_Character_BP_C.UserConstructionScript
// ()

void ADiplodocus_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplodocus_Character_BP.Diplodocus_Character_BP_C.UserConstructionScript");

	ADiplodocus_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Diplodocus_Character_BP.Diplodocus_Character_BP_C.ExecuteUbergraph_Diplodocus_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADiplodocus_Character_BP_C::ExecuteUbergraph_Diplodocus_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Diplodocus_Character_BP.Diplodocus_Character_BP_C.ExecuteUbergraph_Diplodocus_Character_BP");

	ADiplodocus_Character_BP_C_ExecuteUbergraph_Diplodocus_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
