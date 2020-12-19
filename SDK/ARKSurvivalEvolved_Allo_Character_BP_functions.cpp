// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Allo_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Allo_Character_BP.Allo_Character_BP_C.UserConstructionScript
// ()

void AAllo_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Allo_Character_BP.Allo_Character_BP_C.UserConstructionScript");

	AAllo_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Allo_Character_BP.Allo_Character_BP_C.ExecuteUbergraph_Allo_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAllo_Character_BP_C::ExecuteUbergraph_Allo_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Allo_Character_BP.Allo_Character_BP_C.ExecuteUbergraph_Allo_Character_BP");

	AAllo_Character_BP_C_ExecuteUbergraph_Allo_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
