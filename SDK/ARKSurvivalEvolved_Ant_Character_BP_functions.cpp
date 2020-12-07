// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ant_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ant_Character_BP.Ant_Character_BP_C.UserConstructionScript
// ()

void AAnt_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ant_Character_BP.Ant_Character_BP_C.UserConstructionScript");

	AAnt_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ant_Character_BP.Ant_Character_BP_C.ExecuteUbergraph_Ant_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAnt_Character_BP_C::ExecuteUbergraph_Ant_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ant_Character_BP.Ant_Character_BP_C.ExecuteUbergraph_Ant_Character_BP");

	AAnt_Character_BP_C_ExecuteUbergraph_Ant_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
