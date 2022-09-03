// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Manta_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Manta_Character_BP.Manta_Character_BP_C.UserConstructionScript
// ()

void AManta_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Manta_Character_BP.Manta_Character_BP_C.UserConstructionScript");

	AManta_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Manta_Character_BP.Manta_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AManta_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Manta_Character_BP.Manta_Character_BP_C.ReceiveTick");

	AManta_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Manta_Character_BP.Manta_Character_BP_C.ExecuteUbergraph_Manta_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AManta_Character_BP_C::ExecuteUbergraph_Manta_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Manta_Character_BP.Manta_Character_BP_C.ExecuteUbergraph_Manta_Character_BP");

	AManta_Character_BP_C_ExecuteUbergraph_Manta_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
