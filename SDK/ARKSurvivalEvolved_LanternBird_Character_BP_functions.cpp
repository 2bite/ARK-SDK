// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternBird_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternBird_Character_BP.LanternBird_Character_BP_C.ReceiveBeginPlay
// ()

void ALanternBird_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternBird_Character_BP.LanternBird_Character_BP_C.ReceiveBeginPlay");

	ALanternBird_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternBird_Character_BP.LanternBird_Character_BP_C.UserConstructionScript
// ()

void ALanternBird_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternBird_Character_BP.LanternBird_Character_BP_C.UserConstructionScript");

	ALanternBird_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternBird_Character_BP.LanternBird_Character_BP_C.ForceFlyAfterDelay
// ()

void ALanternBird_Character_BP_C::ForceFlyAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternBird_Character_BP.LanternBird_Character_BP_C.ForceFlyAfterDelay");

	ALanternBird_Character_BP_C_ForceFlyAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternBird_Character_BP.LanternBird_Character_BP_C.ExecuteUbergraph_LanternBird_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternBird_Character_BP_C::ExecuteUbergraph_LanternBird_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternBird_Character_BP.LanternBird_Character_BP_C.ExecuteUbergraph_LanternBird_Character_BP");

	ALanternBird_Character_BP_C_ExecuteUbergraph_LanternBird_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
