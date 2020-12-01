// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dragon_Character_BP.Dragon_Character_BP_C.UserConstructionScript
// ()

void ADragon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP.Dragon_Character_BP_C.UserConstructionScript");

	ADragon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP.Dragon_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP.Dragon_Character_BP_C.ReceiveTick");

	ADragon_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dragon_Character_BP.Dragon_Character_BP_C.ExecuteUbergraph_Dragon_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADragon_Character_BP_C::ExecuteUbergraph_Dragon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dragon_Character_BP.Dragon_Character_BP_C.ExecuteUbergraph_Dragon_Character_BP");

	ADragon_Character_BP_C_ExecuteUbergraph_Dragon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
