// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Piranha_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Piranha_Character_BP.Piranha_Character_BP_C.BPTimerServer
// ()

void APiranha_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP.Piranha_Character_BP_C.BPTimerServer");

	APiranha_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Piranha_Character_BP.Piranha_Character_BP_C.UserConstructionScript
// ()

void APiranha_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP.Piranha_Character_BP_C.UserConstructionScript");

	APiranha_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Piranha_Character_BP.Piranha_Character_BP_C.ExecuteUbergraph_Piranha_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APiranha_Character_BP_C::ExecuteUbergraph_Piranha_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP.Piranha_Character_BP_C.ExecuteUbergraph_Piranha_Character_BP");

	APiranha_Character_BP_C_ExecuteUbergraph_Piranha_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
