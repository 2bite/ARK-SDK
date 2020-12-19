// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternLizard_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternLizard_Character_BP.LanternLizard_Character_BP_C.ReceiveBeginPlay
// ()

void ALanternLizard_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternLizard_Character_BP.LanternLizard_Character_BP_C.ReceiveBeginPlay");

	ALanternLizard_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternLizard_Character_BP.LanternLizard_Character_BP_C.UserConstructionScript
// ()

void ALanternLizard_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternLizard_Character_BP.LanternLizard_Character_BP_C.UserConstructionScript");

	ALanternLizard_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternLizard_Character_BP.LanternLizard_Character_BP_C.ExecuteUbergraph_LanternLizard_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternLizard_Character_BP_C::ExecuteUbergraph_LanternLizard_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternLizard_Character_BP.LanternLizard_Character_BP_C.ExecuteUbergraph_LanternLizard_Character_BP");

	ALanternLizard_Character_BP_C_ExecuteUbergraph_LanternLizard_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
