// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stag_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stag_Character_BP.Stag_Character_BP_C.UserConstructionScript
// ()

void AStag_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_Character_BP.Stag_Character_BP_C.UserConstructionScript");

	AStag_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stag_Character_BP.Stag_Character_BP_C.ExecuteUbergraph_Stag_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStag_Character_BP_C::ExecuteUbergraph_Stag_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_Character_BP.Stag_Character_BP_C.ExecuteUbergraph_Stag_Character_BP");

	AStag_Character_BP_C_ExecuteUbergraph_Stag_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
